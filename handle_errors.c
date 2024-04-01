#include "monty.h"

void malloc_failed()
{
	dprintf(2, "Error: Malloc failed\n");
	free__arguments();
	exit(EXIT_SUCCESS);
}
