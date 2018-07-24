#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
	puts("lispy version 0.0.0.0.1");
	puts("press Ctrl+c to exit\n");
	
	while (1) {
		char* input = readline("lispy> ");
		add_history(input);
		printf("No you'are a %s\n", input);
		free(input);
	}

	return 0;
}