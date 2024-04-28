#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string>
#include <vector>
#include "ast.hpp"
#include "c.tab.hpp"
#include "scopeCheck.hpp"
#include "codeGen.hpp"

extern "C" int yylex();
int yyparse();
extern "C" FILE *yyin;
extern ASTNode *tree;
static void usage()
{
    printf("Usage: cc <prog.c>\n");
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        usage();
        exit(1);
    }
    char const *filename = argv[1];
    yyin = fopen(filename, "r");
    assert(yyin);
    extern ASTNode *tree;
    int ret = yyparse();
    std::cout << "AAA MERI JAAN" << std::endl;
    tree->dump_ast();
    printf("retv = %d\n", ret);

    // // Scope Checking
    // ScopeStack scopes = ScopeStack();
    // bool scopechk = scopes.check_node(tree, false);
    // if (!scopechk) {
    //   std::cout << "Scoping check failed." << std::endl;
    //   ret = 1;
    //   printf("retv = %d\n", ret);
    //   exit(1);
    // }

    // if (optimize == 1) {
    //   Optimizer optimizer = Optimizer();

    //   optimizer.optimizeAST(AST);
    //   std::cout << "Optimized the AST! " << std::endl;
    //   if (dump_opt == 1) {
    //     AST->printAST();
    //   }
    // }

    exit(0);
}
