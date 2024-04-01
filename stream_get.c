#include "monty.h"

/**
 * get_stream_failed - failed to get stream
 * @filename: pointer to the file
 */

void get_stream_failed(char *filename)
{
	dprintf(stderr, "Error: Can't open file %s\n", filename);
	free_args();
	exit(EXIT_FAILURE)
}

/**
 * stream_get - gets stream
 * @filename: pointer to th filename
 */

void stream_get(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		get_stream_failed(filename);

	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		get_stream_failed(filename);
	}
}
