#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to create a new AST node
ASTNode *createNode(NodeType type, ASTNode *left, ASTNode *right) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->type = type;
    node->left = left;
    node->right = right;
    node->identifier = NULL;
    node->value = 0;
    return node;
}

// Function to create a literal node (integer)
ASTNode *createLiteralNode(int value) {
    ASTNode *node = createNode(NODE_LITERAL, NULL, NULL);
    node->value = value;
    return node;
}

// Function to create an identifier node
ASTNode *createIdentifierNode(char *name) {
    ASTNode *node = createNode(NODE_IDENTIFIER, NULL, NULL);
    node->identifier = strdup(name);
    return node;
}

// Function to create a binary operation node
ASTNode *createBinaryOpNode(NodeType type, ASTNode *left, ASTNode *right) {
    return createNode(type, left, right);
}

// Function to create an assignment node
ASTNode *createAssignmentNode(char *identifier, ASTNode *expr) {
    ASTNode *node = createNode(NODE_ASSIGNMENT, expr, NULL);
    node->identifier = strdup(identifier);
    return node;
}

// Function to create an if-statement node
ASTNode *createIfNode(ASTNode *condition, ASTNode *body) {
    return createNode(NODE_IF, condition, body);
}

// Function to print the AST (for debugging)
void printAST(ASTNode *node, int depth) {
    if (!node) return;
    
    for (int i = 0; i < depth; i++) printf("  ");
    
    switch (node->type) {
        case NODE_INT_DECL:
            printf("INT DECL: %s\n", node->identifier);
            break;
        case NODE_ASSIGNMENT:
            printf("ASSIGN: %s =\n", node->identifier);
            printAST(node->left, depth + 1);
            break;
        case NODE_BINARY_OP:
            printf("BINARY_OP\n");
            printAST(node->left, depth + 1);
            printAST(node->right, depth + 1);
            break;
        case NODE_IF:
            printf("IF\n");
            printAST(node->left, depth + 1);
            printAST(node->right, depth + 1);
            break;
        case NODE_LITERAL:
            printf("LITERAL: %d\n", node->value);
            break;
        case NODE_IDENTIFIER:
            printf("IDENTIFIER: %s\n", node->identifier);
            break;
    }
}

// Function to free the AST
void freeAST(ASTNode *node) {
    if (!node) return;
    if (node->identifier) free(node->identifier);
    freeAST(node->left);
    freeAST(node->right);
    free(node);
}
