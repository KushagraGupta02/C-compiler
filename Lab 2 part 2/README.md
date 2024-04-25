# dump_ast()
- We constructed the ast from the parse tree
- The identifiers tokens are followed by the identifiers in square brackets, similarly for binary operators their symbols are mentioned in square brackets as we don't have non terminals for those.
- In parse tree we have all the nodes which are part of the grammar, in the tree. But in AST, we can ommit intermediate rules so as to reduce the size of the tree, which we have leveraged at several places
- for example, A->B->C->t can be reduced to A->t (just removed the verbose non terminals which were essentially not required)

# cc
C compiler

The C language grammar (c.y and c.l files) have been taken from:

http://www.quut.com/c/ANSI-C-grammar-y-2011.html