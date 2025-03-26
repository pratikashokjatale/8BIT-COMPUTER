#ifndef AST_H
#define AST_H

#include <stdio.h>
#include <stdlib.h>

typedef enum {
    NODE_INT_DECL,
    NODE_ASSIGNMENT,
    NODE_BINARY_OP,
    NODE_IF,
    NODE_LITERAL,
    NODE_IDENTIFIER
} NodeType;

// Structure for AST nodes
typedef struct ASTNode {
    NodeType type;
    struct ASTNode *left;
    struct ASTNode *right;
    char *identifier;
    int value;
} ASTNode;

// Function declarations for AST
ASTNode *createNode(NodeType type, ASTNode *left, ASTNode *right);
ASTNode *createLiteralNode(int value);
ASTNode *createIdentifierNode(char *name);
ASTNode *createBinaryOpNode(NodeType type, ASTNode *left, ASTNode *right);
ASTNode *createAssignmentNode(char *identifier, ASTNode *expr);
ASTNode *createIfNode(ASTNode *condition, ASTNode *body);
void freeAST(ASTNode *node);
void printAST(ASTNode *node, int depth);

#endif
