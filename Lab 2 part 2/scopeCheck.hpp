// After constructing the AST, we can perform semantic analysis on the AST.
// The first step is to check the scoping of the program. This is done by the check_node function of the ScopeStack class. The check_node function takes the AST and a boolean value as arguments. The boolean value is used to determine whether the scoping check is being performed on a function or a block.
// The check_node function recursively checks the scoping of the program. It traverses the AST and enters a new scope whenever it encounters a block or a function definition. It exits the scope when it encounters the end of a block or a function definition.
// The check_node function also checks for double declarations of variables and functions. It uses the check_scope function of the Scope class to check if a symbol is already defined in the current scope.


#include "ast.hpp"
#include <iostream>
#include <vector>
#include <utility>


class Scope{
    public:
        std::vector<std::pair<std::string, std::string>> name_val_pairs_local;
        std::vector<std::pair<std::string, std::string>> name_val_pairs_global;
    
    Scope(std::vector<std::pair<std::string, std::string>> name_val_pairs_local, std::vector<std::pair<std::string, std::string>> name_val_pairs_global);    // Constructor

    void print_scope_content();    // Print the content of the scope

    void add_symbol(std::string name, std::string val);    // Add a symbol to the current scope

    bool check_declaration(std::string name, std::string val);    // Check if a symbol is already declared in the current scope

    bool check_scope(std::string name, std::string val);    // Check if a symbol is defined in the current scope
};


class SymbolTable{
    public:
        std::vector<Scope> scopes;   // Stack of scopes
        bool debug;

    SymbolTable();    // Default Constructor

    void enter_scope();    // Start a new nested scope

    void exit_scope();    // Exit the current scope

    bool check_node(ASTNode* node, bool decl);    // Check the scoping of the program
};
