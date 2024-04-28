#include "ast.hpp"
#include <stack>
#include <vector>
#include <iostream>


class Scope {
    public:
        std::vector<std::string> symbols;
        std::vector<std::string> locals;
    
    Scope();

    Scope(std::vector<std::string> syms, std::vector<std::string> locs);

    void print_syms();

    void add_symbol(std::string id);

    bool check_decl(std::string id, bool top);

    bool check_scope(std::string id, bool top);

};

class ScopeStack {
    public: 
        int size;
        std::stack<Scope> scopes;
        bool debug;

    ScopeStack();

    void enter_scope();

    void exit_scope();

    bool check_node(ASTNode* node, bool decl);
    
};