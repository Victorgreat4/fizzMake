#include "fizzbuzz.h"

#include <string.h>
#include <stdio.h>

#define QUIET_NUMBER      0
#define FIZZ_MULTIPLE     3
#define BUZZ_MULTIPLE     5
#define FIZZBUZZ_MULTIPLE (FIZZ_MULTIPLE * BUZZ_MULTIPLE)

static char fizzbuzz_output[32];

const char* fizzbuzz_say(int number)
{
	memset(fizzbuzz_output, 0, sizeof(fizzbuzz_output));

	if (number != QUIET_NUMBER)
	{
		if((number % FIZZBUZZ_MULTIPLE) == 0)
			sprintf(fizzbuzz_output, "%s", "FizzBuzz");

		else if((number % FIZZ_MULTIPLE) == 0)
			sprintf(fizzbuzz_output, "%s", "Fizz");

		else if((number % BUZZ_MULTIPLE) == 0)
			sprintf(fizzbuzz_output, "%s", "Buzz");

		else
			sprintf(fizzbuzz_output, "%d", number);
	}

	return fizzbuzz_output;
}
