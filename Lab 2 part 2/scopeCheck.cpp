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
    
}


