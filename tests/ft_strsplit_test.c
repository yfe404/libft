#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Function prototype
char **ft_strsplit(char const *s, char c);

// Utility function to count elements in a string array
int count_strings(char **array) {
    int count = 0;
    while (array[count]) {
        count++;
    }
    return count;
}

// Utility function to free a string array
void free_split_result(char **array) {
    int i = 0;
    while (array[i]) {
        free(array[i]);
        i++;
    }
    free(array);
}

// Test function for ft_strsplit
void test_ft_strsplit() {
    char **result;

    // Test 1: Normal case with multiple words
    result = ft_strsplit("*hello*fellow***students*", '*');
    assert(result != NULL);
    assert(count_strings(result) == 3);
    assert(strcmp(result[0], "hello") == 0);
    assert(strcmp(result[1], "fellow") == 0);
    assert(strcmp(result[2], "students") == 0);
    free_split_result(result);

    // Test 2: Single word without delimiter
    result = ft_strsplit("hello", '*');
    assert(result != NULL);
    assert(count_strings(result) == 1);
    assert(strcmp(result[0], "hello") == 0);
    free_split_result(result);

    // Test 3: Only delimiter characters
    result = ft_strsplit("***", '*');
    assert(result != NULL);
    assert(count_strings(result) == 0); // No words should be extracted
    free(result);

    // Test 4: Empty string
    result = ft_strsplit("", '*');
    assert(result != NULL);
    assert(count_strings(result) == 0);
    free(result);

    // Test 5: Delimiter at the beginning and end
    result = ft_strsplit("*hello*", '*');
    assert(result != NULL);
    assert(count_strings(result) == 1);
    assert(strcmp(result[0], "hello") == 0);
    free_split_result(result);

    // Test 6: Multiple spaces as delimiter
    result = ft_strsplit("   split   this  string ", ' ');
    assert(result != NULL);
    assert(count_strings(result) == 3);
    assert(strcmp(result[0], "split") == 0);
    assert(strcmp(result[1], "this") == 0);
    assert(strcmp(result[2], "string") == 0);
    free_split_result(result);

    // Test 7: NULL input should return NULL
    result = ft_strsplit(NULL, '*');
    assert(result == NULL);

    printf("All tests passed!\n");
}

int main() {
    test_ft_strsplit();
    return 0;
}

