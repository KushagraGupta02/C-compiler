#ifndef AST_HPP
#define AST_HPP

#include <string>
#include <vector>
#include <iostream>

struct ASTNode
{
    std::string val = "";
    std::vector<ASTNode *> children;
    enum node_types
    {
        ARRAY,
        UNOP,
        IDENTIFIER,
        FUNCTION_SPEC,
        FUNC_NAME,
        POINTER,
        TYPE,
        PARAM,
        INT,
        FLOAT,
        ENUM,
        STRING,
        STATEMENTS,
        ASSIGN_OP,
        UN_OP,
        BIN_OP,
        PAREXP,
        ASSIGNEXP,
        BINEXP,
        UNEXP,
        EXPRESSION,
        ITE,
        WHILE,
        FOR,
        FUNCTION,
        FUNCDEF,
        BLOCK,
        TRANSLATION_UNIT,
        VARDEC,
        FUNCALL,
        RETURN,
        GOTO,
        LABEL,
        ARRELEM,
        LIST
    };

    node_types type = TRANSLATION_UNIT;
    int valuei = 0;
    float valuef = 0.0;

    ASTNode(std::string val)
    {
        this->val = val;
        this->children = std::vector<ASTNode *>();
    }

    
    ASTNode(node_types type, int ival)
    {
        this->type = type;
        this->val = "val";
        // this->val = std::to_string(ival);
        this->valuei = ival;
        this->children = std::vector<ASTNode *>();
    }

    ASTNode(node_types type, float fval)
    {
        this->type = type;
        this->val = "val";
        // this->val = std::to_string(fval);
        this->valuef = fval;
        this->children = std::vector<ASTNode *>();
    }

    ASTNode(node_types type, std::string str, ASTNode *child1 = nullptr, ASTNode *child2 = nullptr, ASTNode *child3 = nullptr, ASTNode *child4 = nullptr, ASTNode *child5 = nullptr)
        : val(str)
    {
        this->val = str;
        this->type = type;
        this->children = std::vector<ASTNode *>();
        if (child1)
            this->children.push_back(child1);
        if (child2)
            this->children.push_back(child2);
        if (child3)
            this->children.push_back(child3);
        if (child4)
            this->children.push_back(child4);
        if (child5)
            this->children.push_back(child5);
    }

    ASTNode(node_types type, const std::string &label, std::vector<ASTNode *> children)
        : val(label)
    {
        this->val = "";
        this->children = std::vector<ASTNode *>();
        this->type = type;
        for (auto child : children)
            addChild(child);
    }

    ~ASTNode()
    {
        for (auto child : children)
            delete child;
    }

    void addChild(ASTNode *child)
    {
        children.push_back(child);
    }



    void dump_ast(const std::string& prefix = "", bool isLast = true, bool isFirst = true) const
    {
    if (!isFirst){
    if (children.size()==0) return;
    bool flag_leaf = false;
    std::vector<int> leaves;
    for (int i=0; i<children.size(); i++){
        if (children.size()>0 && children[i]->children.size()==0) {flag_leaf = true; leaves.push_back(i);}

    }
    if (flag_leaf){
        std::cout << prefix;
        std::cout << (isLast ? "└── " : "├── ") << val;
        for (int i=0; i<leaves.size(); i++){
        std::cout << " [" << children[leaves[i]]->val << "]" << std::endl;
        }
    }
    else{
        std::cout << prefix;
        std::cout << (isLast ? "└── " : "├── ") << val << std::endl;
    }
    
    }
    else{
        std::cout << prefix;
        std::cout << val << std::endl;
    }
    // if (children.size()==0) std::cout << "BOOOM!";
    // else {
    for (size_t i = 0; i < children.size(); ++i)
    {   
        // if (children.size()==0) std::cout << "BOOOM";//children[i]->dumpASTNode(prefix + (isLast ? "    " : "│   "), i == children.size() - 1, false, "BOOOOMMMMMM");
       // else 
        children[i]->dump_ast(prefix + (isLast ? "    " : "│   "), i == children.size() - 1, false);
    }
    }

};

struct ASTNodeList
{
    std::vector<ASTNode *> nodelist;
    int length = 0;

    ASTNodeList(ASTNode *node)
    {
        nodelist.push_back(node);
        length++;
    }
};

#endif
