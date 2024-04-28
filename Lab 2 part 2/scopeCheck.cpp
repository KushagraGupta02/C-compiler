#include "scopeCheck.hpp"


Scope::Scope(std::vector<std::pair<std::string, std::string>> locals, std::vector<std::pair<std::string, std::string>> globals) {
    for(auto local : name_val_pairs_local) {
        name_val_pairs_local.push_back(local);
    }
    for(auto global : name_val_pairs_global) {
        name_val_pairs_global.push_back(global);
    }
}

void Scope::print_scope_content() {
    std::cout << "Local Variables: " << std::endl;
    for (auto pair : name_val_pairs_local) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
    std::cout << "Global Variables: " << std::endl;
    for (auto pair : name_val_pairs_global) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
}

void Scope::add_symbol(std::string name, std::string val) {
    name_val_pairs_local.push_back(std::make_pair(name, val));
}

bool Scope::check_declaration(std::string name, std::string val) {
    for (auto pair : name_val_pairs_local) {
        if (pair.first == name) return true;
    }
    return false;
}

bool Scope::check_scope(std::string name, std::string val) {
    for (auto pair : name_val_pairs_local) {
        if (pair.first == name) return true;
    }
    for (auto pair : name_val_pairs_global) {
        if (pair.first == name) return true;
    }
    return false;
}

SymbolTable::SymbolTable() {
    Scope startscope = Scope(std::vector<std::pair<std::string, std::string>>(), std::vector<std::pair<std::string, std::string>>());
    scopes.push_back(startscope);
    debug = false;
}

void SymbolTable::enter_scope() {
    Scope new_scope = scopes[scopes.size() - 1];
    scopes.push_back(new_scope);
}

void SymbolTable::exit_scope() {
    scopes.pop_back();
}

bool SymbolTable::check_node(ASTNode* node, bool declared) {

    ASTNode::node_types ntype = node->type;
    std::cout << "NODE TYPE: " << ntype << std::endl;
    if (ntype == ASTNode::node_types::TRANSLATION_UNIT){
        bool b = true;
        for (auto child : node->children) {
            b = b && check_node(child, declared);
        }
        return b;
    }
    else if (ntype == ASTNode::node_types::FUNC_NAME) {
        bool b = true;
        for (auto child : node->children) {
            b = b && check_node(child, declared);
        }
        return b;
    }
    else if (ntype == ASTNode::node_types::FUNCDEF){
        std::string fName = node->children[0]->val;
        // std::cout << "HEREEEEEEEEEEEEEEEEEEEEEEEEEEEEEE " << fName << std::endl; 
        if (scopes[scopes.size() - 1].check_scope(fName, "function")) {
            std::cout << "Function " << fName << " already declared." << std::endl;
            return false;
        }
        else {
            scopes[scopes.size() - 1].add_symbol(fName, "function");
            enter_scope();
            bool b = true;
            for (int i = 1; i < node->children.size(); i++) {
                b = b && check_node(node->children[i], true);
            }
            exit_scope();
            return b;
        }
    }
    else if (ntype == ASTNode::node_types::BLOCK) {
        enter_scope();
        bool b = true;
        for (auto child : node->children) {
            b = b && check_node(child, declared);
        }
        exit_scope();
        return b;
    }
    else if (ntype == ASTNode::node_types::VARDEC) {
        std::string vName = node->children[0]->val;
        if (scopes[scopes.size() - 1].check_scope(vName, "variable")) {
            std::cout << "Variable " << vName << " already declared." << std::endl;
            return false;
        }
        else {
            scopes[scopes.size() - 1].add_symbol(vName, "variable");
            return true;
        }
    }
    else if (ntype == ASTNode::node_types::FOR) {
        bool b = true;
        for (auto child : node->children) {
            b = b && check_node(child, declared);
        }
        if (b) {
            enter_scope();
            b = check_node(node->children[1], declared);
            exit_scope();
            return b;
        }
        else return false;
    }
    else if (ntype == ASTNode::node_types::WHILE) {
        bool b = true;
        for (auto child : node->children) {
            b = b && check_node(child, declared);
        }
        if (b) {
            enter_scope();
            b = check_node(node->children[1], declared);
            exit_scope();
            return b;
        }
        else return false;
    }
    else {
        bool b = true;
        for (auto child : node->children) {
            b = b && check_node(child, declared);
        }
        return b;
    }

    return true;

}


