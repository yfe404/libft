#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Function prototype
void ft_putendl(char const *s);

void test_ft_putendl() {
    char buffer[100];  // Buffer to hold captured output
    FILE *fp;
    FILE *original_stdout = stdout; // Save original stdout

    // Redirect stdout to a file
    fp = freopen("test_output.txt", "w", stdout);
    if (!fp) {
        perror("freopen failed");
        exit(1);
    }

    // Test 1: Print a regular string followed by a newline
    ft_putendl("Hello, World!");

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

    fgets(buffer, sizeof(buffer), fp);  // Read the output string
    fclose(fp);

    // Check if output is correct (should be "Hello, World!\n")
    assert(strcmp(buffer, "Hello, World!\n") == 0);

    // Restore stdout completely
    stdout = original_stdout;

    printf("All tests passed!\n");
}

int main() {
    test_ft_putendl();
    return 0;
}

