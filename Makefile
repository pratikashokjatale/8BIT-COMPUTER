CC = gcc
CFLAGS = -Wall -Wextra -std=c99
OBJ = lexer.o parser.o ast.o codegen.o main.o

all: compiler

compiler: $(OBJ)
	$(CC) $(CFLAGS) -o compiler $(OBJ)

lexer.o: lexer.c
	$(CC) $(CFLAGS) -c lexer.c

parser.o: parser.c
	$(CC) $(CFLAGS) -c parser.c

ast.o: ast.ch
	$(CC) $(CFLAGS) -c ast.c

codegen.o: codegen.c
	$(CC) $(CFLAGS) -c codegen.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o compiler
