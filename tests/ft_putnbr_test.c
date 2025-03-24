#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <assert.h>

// Function prototype
void ft_putnbr(int n);

void test_ft_putnbr() {
    char buffer[50];  // Buffer to hold captured output
    FILE *fp;
    FILE *original_stdout = stdout;  // Save original stdout

    // Redirect stdout to a file
    fp = freopen("test_output.txt", "w", stdout);
    if (!fp) {
        perror("freopen failed");
        exit(1);
    }

    // Test 1: Print a positive integer
    ft_putnbr(12345);
    fflush(stdout);
    freopen("/dev/tty", "w", stdout);  // For Linux/macOS
    // freopen("CON", "w", stdout);  // For Windows
    fp = fopen("test_output.txt", "r");
    if (!fp) {
        perror("fopen failed");
        exit(1);
    }
    fgets(buffer, sizeof(buffer), fp);  // Read the output string
    fclose(fp);
    assert(strcmp(buffer, "12345") == 0);

    // Test 2: Print a negative integer
    fp = freopen("test_output.txt", "w", stdout);
    ft_putnbr(-6789);
    fflush(stdout);
    freopen("/dev/tty", "w", stdout);
    fp = fopen("test_output.txt", "r");
    if (!fp) {
        perror("fopen failed");
        exit(1);
    }
    fgets(buffer, sizeof(buffer), fp);  // Read the output string
    fclose(fp);
    assert(strcmp(buffer, "-6789") == 0);

    // Test 3: Print zero
    fp = freopen("test_output.txt", "w", stdout);
    ft_putnbr(0);
    fflush(stdout);
    freopen("/dev/tty", "w", stdout);
    fp = fopen("test_output.txt", "r");
    if (!fp) {
        perror("fopen failed");
        exit(1);
    }
    fgets(buffer, sizeof(buffer), fp);  // Read the output string
    fclose(fp);
    assert(strcmp(buffer, "0") == 0);

    // Test 4: Print INT_MAX
    fp = freopen("test_output.txt", "w", stdout);
    ft_putnbr(INT_MAX);
    fflush(stdout);
    freopen("/dev/tty", "w", stdout);
    fp = fopen("test_output.txt", "r");
    if (!fp) {
        perror("fopen failed");
        exit(1);
    }
    fgets(buffer, sizeof(buffer), fp);  // Read the output string
    fclose(fp);
    char expected_max[50];
    snprintf(expected_max, sizeof(expected_max), "%d", INT_MAX);  // Convert INT_MAX to string
    assert(strcmp(buffer, expected_max) == 0);

    // Test 5: Print INT_MIN
    fp = freopen("test_output.txt", "w", stdout);
    ft_putnbr(INT_MIN);
    fflush(stdout);
    freopen("/dev/tty", "w", stdout);
    fp = fopen("test_output.txt", "r");
    if (!fp) {
        perror("fopen failed");
        exit(1);
    }
    fgets(buffer, sizeof(buffer), fp);  // Read the output string
    fclose(fp);
    char expected_min[50];
    snprintf(expected_min, sizeof(expected_min), "%d", INT_MIN);  // Convert INT_MIN to string
    assert(strcmp(buffer, expected_min) == 0);

    printf("All tests passed!\n");
}

int main() {
    test_ft_putnbr();
    return 0;
}

