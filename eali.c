#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main (void)
{
	int fd;
	const void *lol;
 	unsigned int count;
	fd = 1;
	lol = "coucou";
	count = strlen(lol);
	write ( fd, lol, count );
	return (0);
}
