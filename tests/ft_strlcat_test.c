#include <stdio.h>
#include <string.h>
#include <assert.h>

// Function prototype
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

// Test function for ft_strlcat
void test_ft_strlcat() {
    char dst[20];
    char std_dst[20];  // For standard strlcat comparison
    size_t expected, actual;

    // Test 1: Normal case - enough space
    strcpy(dst, "Hello, ");
    strcpy(std_dst, "Hello, ");
    expected = strlcat(std_dst, "World!", sizeof(std_dst));
    actual = ft_strlcat(dst, "World!", sizeof(dst));
    assert(strcmp(dst, std_dst) == 0);
    assert(actual == expected);

    // Test 2: Exact fit
    strcpy(dst, "12345");
    strcpy(std_dst, "12345");
    expected = strlcat(std_dst, "6789", 10);
    actual = ft_strlcat(dst, "6789", 10);
    assert(strcmp(dst, std_dst) == 0);
    assert(actual == expected);

    // Test 3: No space (dstsize == 0)
    strcpy(dst, "Hello");
    strcpy(std_dst, "Hello");
    expected = strlcat(std_dst, "World!", 0);
    actual = ft_strlcat(dst, "World!", 0);
    assert(actual == expected);

    // Test 4: Buffer too small (truncation occurs)
    strcpy(dst, "Hi");
    strcpy(std_dst, "Hi");
    expected = strlcat(std_dst, " there!", 5);
    actual = ft_strlcat(dst, " there!", 5);
    assert(actual == expected);

    // Test 5: Large buffer
    strcpy(dst, "This is ");
    strcpy(std_dst, "This is ");
    expected = strlcat(std_dst, "a test of strlcat", sizeof(std_dst));
    actual = ft_strlcat(dst, "a test of strlcat", sizeof(dst));
    assert(strcmp(dst, std_dst) == 0);
    assert(actual == expected);

    // Test 6: Empty src
    strcpy(dst, "Hello");
    strcpy(std_dst, "Hello");
    expected = strlcat(std_dst, "", sizeof(std_dst));
    actual = ft_strlcat(dst, "", sizeof(dst));
    assert(strcmp(dst, std_dst) == 0);
    assert(actual == expected);

    // Test 7: Empty dst
    strcpy(dst, "");
    strcpy(std_dst, "");
    expected = strlcat(std_dst, "World!", sizeof(std_dst));
    actual = ft_strlcat(dst, "World!", sizeof(dst));
    assert(strcmp(dst, std_dst) == 0);
    assert(actual == expected);

    // Test 8: dst is already full
    strcpy(dst, "abcdefghij"); // 10 chars + '\0'
    strcpy(std_dst, "abcdefghij");
    expected = strlcat(std_dst, "123", 10);
    actual = ft_strlcat(dst, "123", 10);
    assert(actual == expected);

    // Test 9: dstsize == strlen(dst) (no room for null-terminator)
    strcpy(dst, "Hello");
    strcpy(std_dst, "Hello");
    expected = strlcat(std_dst, "World!", 5);
    actual = ft_strlcat(dst, "World!", 5);
    assert(actual == expected);

    printf("All tests passed!\n");
}

// Main function to execute tests
int main() {
    test_ft_strlcat();
    return 0;
}

