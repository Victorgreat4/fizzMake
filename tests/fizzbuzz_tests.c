#include "fizzbuzz.h"

#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_fizzbuzz_quiet(void)
{
	TEST_ASSERT_EQUAL_STRING("", fizzbuzz_say(0));
}

void test_fizzbuzz_print_digits(void)
{
	TEST_ASSERT_EQUAL_STRING("1", fizzbuzz_say(1));
	TEST_ASSERT_EQUAL_STRING("2", fizzbuzz_say(2));
	TEST_ASSERT_EQUAL_STRING("4", fizzbuzz_say(4));
}

void test_fizzbuzz_print_fizz(void)
{
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(3));
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(6));
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(9));
}

void test_fizzbuzz_print_buzz(void)
{
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(5));
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(10));
}

void test_fizzbuzz_print_fizzbuzz(void)
{
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(15));
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(30));
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(45));
}

int main(int argc, char **argv)
{
	UNITY_BEGIN();

	RUN_TEST(test_fizzbuzz_quiet);
	RUN_TEST(test_fizzbuzz_print_digits);
	RUN_TEST(test_fizzbuzz_print_fizz);
	RUN_TEST(test_fizzbuzz_print_buzz);
	RUN_TEST(test_fizzbuzz_print_fizzbuzz);

	return UNITY_END();
}
