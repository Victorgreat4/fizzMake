#include "fizzbuzz.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void perform_fizzbuzz(int iterations);

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		printf("Usage: %s <count until>\n", argv[0]);
		return -1;
	}

	int count_until = atoi(argv[1]);

	if(count_until < 1)
	{
		printf("Please specify a number greater than 0!\n");
		return -1;
	}

	perform_fizzbuzz(count_until);

	return 0;
}

static void perform_fizzbuzz(int count)
{
	for(int i = 1; i <= count; i++)
	{
		printf("%-10s", fizzbuzz_say(i));

		if((i % 8) == 0)
			printf("\n");
	}

	if((count % 8) != 0)
		printf("\n");
}
