#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <limits.h>

// Function prototype
char *ft_itoa(int n);

// Test cases
void test_ft_itoa() {
    char *result;

    // Test 1: Convert zero
    result = ft_itoa(0);
    assert(result != NULL);
    assert(strcmp(result, "0") == 0);
    free(result);

    // Test 2: Convert a positive number
    result = ft_itoa(12345);
    assert(result != NULL);
    assert(strcmp(result, "12345") == 0);
    free(result);

    // Test 3: Convert a negative number
    result = ft_itoa(-54321);
    assert(result != NULL);
    assert(strcmp(result, "-54321") == 0);
    free(result);

    // Test 4: Convert INT_MAX (2147483647)
    result = ft_itoa(INT_MAX);
    assert(result != NULL);
    assert(strcmp(result, "2147483647") == 0);
    free(result);

    // Test 5: Convert INT_MIN (-2147483648)
    result = ft_itoa(INT_MIN);
    assert(result != NULL);
    assert(strcmp(result, "-2147483648") == 0);
    free(result);

    // Test 6: Convert single-digit positive number
    result = ft_itoa(7);
    assert(result != NULL);
    assert(strcmp(result, "7") == 0);
    free(result);

    // Test 7: Convert single-digit negative number
    result = ft_itoa(-9);
    assert(result != NULL);
    assert(strcmp(result, "-9") == 0);
    free(result);

    printf("All tests passed!\n");
}

int main() {
    test_ft_itoa();
    return 0;
}

