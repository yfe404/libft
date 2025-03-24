#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Function prototype
void ft_putchar(char c);

void test_ft_putchar() {
    char buffer[2];  // Buffer to hold one character and a null terminator
    FILE *fp;
    FILE *original_stdout = stdout; // Save original stdout

    // Redirect stdout to a file
    fp = freopen("test_output.txt", "w", stdout);
    if (!fp) {
        perror("freopen failed");
        exit(1);
    }

    // Test 1: Print a regular character
    ft_putchar('A');

    // Restore stdout to normal
    fflush(stdout);
    freopen("/dev/tty", "w", stdout);  // For Linux/macOS
    // freopen("CON", "w", stdout);  // For Windows

    // Reopen the file and read its contents
    fp = fopen("test_output.txt", "r");
    if (!fp) {
        perror("fopen failed");
        exit(1);
    }

    fgets(buffer, 2, fp);  // Read one character from file
    fclose(fp);

    // Check if output is correct
    assert(buffer[0] == 'A');

    // Restore stdout completely
    stdout = original_stdout;

    printf("All tests passed!\n");
}

int main() {
    test_ft_putchar();
    return 0;
}

