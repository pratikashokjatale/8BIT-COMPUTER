#include "ast.h"
void parse() {
    printf("Parsing SimpleLang program...\n");

    // Example: Constructing a simple AST for a = 10 + 20;
    ASTNode *left = createLiteralNode(10);
    ASTNode *right = createLiteralNode(20);
    ASTNode *binaryOp = createBinaryOpNode(NODE_BINARY_OP, left, right);
    ASTNode *assign = createAssignmentNode("a", binaryOp);

    printAST(assign, 0);  // Print AST for debugging

    freeAST(assign);  // Clean up memory
}
