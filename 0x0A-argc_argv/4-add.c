#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (e[k] < 48 || e[k] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(e);
		e++;
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
