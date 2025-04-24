# Executable name
NAME = todo-app

# Folders
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

# Source and object files
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -I$(INC_DIR)

# Default target
all: $(NAME)

# Build the executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c files into .o files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Remove object files
clean:
	rm -rf $(BUILD_DIR)

# Remove object files and the executable
fclean: clean
	rm -f $(NAME)

# Full rebuild
re: fclean all

# Run the program
run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run

