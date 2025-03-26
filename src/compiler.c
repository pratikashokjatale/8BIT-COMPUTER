#include <stdio.h>
#include "lexer.h"

int main() {
    FILE *file = fopen("examples/input.txt", "r");
    if (!file) {
        perror("Failed to open file");
        return 1;
    }

    Token token;
    do {
        getNextToken(file, &token);
        printf("Token: %d, Text: %s\n", token.type, token.text);
    } while (token.type != TOKEN_EOF);

    fclose(file);
    return 0;
}
