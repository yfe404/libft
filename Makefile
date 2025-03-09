CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
TEST_DIR = tests
BUILD_DIR = build

# Automatically find test source files and corresponding source files
TESTS = $(wildcard $(TEST_DIR)/*_test.c)
TEST_BINS = $(patsubst $(TEST_DIR)/%_test.c, $(BUILD_DIR)/%, $(TESTS))

# Create build directory if not exists
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule to compile each test
$(BUILD_DIR)/%: $(TEST_DIR)/%_test.c $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $^ -o $@

# Run all tests
.PHONY: test
test: $(TEST_BINS)
	@for test in $(TEST_BINS); do \
		echo "Running $$test..."; \
		$$test; \
	done
	echo "All tests passed!"

# Clean build files
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)

