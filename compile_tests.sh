rm -r build
mkdir -p build
gcc src/fizzbuzz.c tests/fizzbuzz_tests.c tests/unity.c -I src/ -o build/fizzbuzz_tests
