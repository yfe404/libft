#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

// Function prototype
void ft_putendl_fd(char const *s, int fd);

void test_ft_putendl_fd() {
    char buffer[100];  // Buffer to hold captured output
    int fd;
    
    // Open a temporary file for writing
    fd = open("test_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0) {
        perror("open failed");
        exit(1);
    }

    // Test string
    const char *test_str = "Hello, Libft!";

    // Write the string followed by a newline using ft_putendl_fd
    ft_putendl_fd(test_str, fd);

    // Close the file to ensure the write operation is saved
    close(fd);

    // Open the file again for reading
    fd = open("test_output.txt", O_RDONLY);
    if (fd < 0) {
        perror("open failed");
        exit(1);
    }

    // Read back the content
    ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    buffer[bytes_read] = '\0';  // Null-terminate

    close(fd);

    // Ensure the function wrote the expected string plus a newline
    assert(bytes_read == (ssize_t)(strlen(test_str) + 1)); // +1 for the newline
    assert(strcmp(buffer, "Hello, Libft!\n") == 0); // Ensure correct string plus newline

    printf("All tests passed!\n");
}

int main() {
    test_ft_putendl_fd();
    return 0;
}

