#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <assert.h>
#include <string.h>
#include <fcntl.h>

#define BUFFER_SIZE 50

// Function prototype
void ft_putnbr_fd(int n, int fd);

// Utility function to read from a file into a buffer
void read_file_output(const char *filename, char *buffer, size_t size) {
    int file = open(filename, O_RDONLY);
    if (file == -1) {
        perror("open failed");
        exit(1);
    }

    ssize_t bytes_read = read(file, buffer, size);
    if (bytes_read == -1) {
        perror("read failed");
        close(file);
        exit(1);
    }
    buffer[bytes_read] = '\0'; // Null-terminate the string
    close(file);
}

void test_ft_putnbr_fd() {
    char buffer[BUFFER_SIZE];  // Buffer to hold captured output
    char expected_output[BUFFER_SIZE];
    const char *filename = "test_output.txt";

    // Ensure the file is empty before starting the test
    unlink(filename);  // Remove the file if it exists

    // Test 1: Print a positive integer
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open failed");
        exit(1);
    }
    ft_putnbr_fd(12345, fd);
    close(fd);

    // Read the output from the file
    read_file_output(filename, buffer, BUFFER_SIZE);
    snprintf(expected_output, sizeof(expected_output), "%d", 12345);
    assert(strcmp(buffer, expected_output) == 0);

    // Test 2: Print a negative integer
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open failed");
        exit(1);
    }
    ft_putnbr_fd(-6789, fd);
    close(fd);
    read_file_output(filename, buffer, BUFFER_SIZE);
    snprintf(expected_output, sizeof(expected_output), "%d", -6789);
    assert(strcmp(buffer, expected_output) == 0);

    // Test 3: Print zero
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open failed");
        exit(1);
    }
    ft_putnbr_fd(0, fd);
    close(fd);
    read_file_output(filename, buffer, BUFFER_SIZE);
    snprintf(expected_output, sizeof(expected_output), "%d", 0);
    assert(strcmp(buffer, expected_output) == 0);

    // Test 4: Print INT_MAX
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open failed");
        exit(1);
    }
    ft_putnbr_fd(INT_MAX, fd);
    close(fd);
    read_file_output(filename, buffer, BUFFER_SIZE);
    snprintf(expected_output, sizeof(expected_output), "%d", INT_MAX);
    assert(strcmp(buffer, expected_output) == 0);

    // Test 5: Print INT_MIN
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open failed");
        exit(1);
    }
    ft_putnbr_fd(INT_MIN, fd);
    close(fd);
    read_file_output(filename, buffer, BUFFER_SIZE);
    snprintf(expected_output, sizeof(expected_output), "%d", INT_MIN);
    assert(strcmp(buffer, expected_output) == 0);

    // Clean up by removing the test file after tests
    unlink(filename);

    printf("All tests passed!\n");
}

int main() {
    test_ft_putnbr_fd();
    return 0;
}
