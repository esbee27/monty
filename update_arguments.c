#include "monty.h"

/**
 * update_arguments - checks if there is an argument
 * @argc: number of arguments
 */

void update_arguments(int argc)
{
	if (argc == 2)
		return;
	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
