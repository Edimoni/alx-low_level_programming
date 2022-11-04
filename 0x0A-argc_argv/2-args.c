#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vectort
 * Return: success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	
	exit(EXIT_SUCCESS);
}
