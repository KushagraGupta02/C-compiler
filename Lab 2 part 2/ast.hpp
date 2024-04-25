#ifndef AST_HPP
#define AST_HPP

#include <string>
#include <vector>
#include <iostream>

struct ASTNode
{
    std::string label;
    std::vector<ASTNode *> children;

    ASTNode(const std::string &label, ASTNode *child1 = nullptr, ASTNode *child2 = nullptr, ASTNode *child3 = nullptr, ASTNode *child4 = nullptr,  ASTNode *child5 = nullptr)
        : label(label)
    {
        if (child1)
            children.push_back(child1);
        if (child2)
            children.push_back(child2);
        if (child3)
            children.push_back(child3);
        if (child4)
            children.push_back(child4);
        if (child5)
            children.push_back(child5);
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

    // void print(int level = 0) const
    // {
    //     for (int i = 0; i < level; ++i)
    //         std::cout << "  ";
    //     std::cout << label << std::endl;
    //     for (auto child : children)
    //         child->print(level + 1);
    // }

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
        std::cout << (isLast ? "└── " : "├── ") << label;
        for (int i=0; i<leaves.size(); i++){
        std::cout << " [" << children[leaves[i]]->label << "]" << std::endl;
        }
    }
    else{
        std::cout << prefix;
        std::cout << (isLast ? "└── " : "├── ") << label << std::endl;
    }
    
    }
    else{
        std::cout << prefix;
        std::cout << label << std::endl;
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

#endif
