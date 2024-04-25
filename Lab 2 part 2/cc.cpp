#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string>
#include <vector>
#include "ast.hpp"
#include "c.tab.hpp"

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
    tree->dump_ast();
    printf("retv = %d\n", ret);
    exit(0);
}
