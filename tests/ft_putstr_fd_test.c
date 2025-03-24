 #include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

// Function prototype
void ft_putstr_fd(char const *s, int fd);

void test_ft_putstr_fd() {
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
    
    // Write the string using ft_putstr_fd
    ft_putstr_fd(test_str, fd);

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

    // Ensure the function wrote the expected string
    assert(bytes_read == (ssize_t)strlen(test_str));
    assert(strcmp(buffer, test_str) == 0);

    printf("All tests passed!\n");
}

int main() {
    test_ft_putstr_fd();
    return 0;
}

