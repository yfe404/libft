#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

// Function prototype
void ft_putchar_fd(char c, int fd);

void test_ft_putchar_fd() {
    char buffer[2];  // Buffer to hold one character and a null terminator
    int fd;
    
    // Open a temporary file for writing
    fd = open("test_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0) {
        perror("open failed");
        exit(1);
    }

    // Write a character using ft_putchar_fd
    ft_putchar_fd('X', fd);

    // Close the file to ensure the write operation is saved
    close(fd);

    // Open the file again for reading
    fd = open("test_output.txt", O_RDONLY);
    if (fd < 0) {
        perror("open failed");
        exit(1);
    }

    // Read the character from the file
    ssize_t bytes_read = read(fd, buffer, 1);
    buffer[1] = '\0'; // Null-terminate for safety
    close(fd);

    // Ensure the function wrote exactly one character
    assert(bytes_read == 1);
    assert(buffer[0] == 'X');

    printf("All tests passed!\n");
}

int main() {
    test_ft_putchar_fd();
    return 0;
}

