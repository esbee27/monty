#include "monty.h"


int main(int argc, char **argv)
{
	size_t n = 0;
	size_t n_read;
	update_arguments(argc);
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		malloc_failed();
	arguments->stream = NULL;
	arguments->line = NULL;

	stream_get(argv[i]);

	n_read = getline(&arguments->line, &n, arguments->stream)
		while(n_read != -1)
		{
			arguments->line_number += 1;
			tokenize_ln();
			get_instruction();
			run_instruction();
			free_tokens();
		}
	stream_close();
	free_arguments();
	

	return (0)
}
