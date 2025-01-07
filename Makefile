#This is a make file for our C programming language. 

# Compiler and flags
CC = clang
CFLAGS = -Wall -Wextra

# Get all .c files in the directory
SOURCES = $(wildcard *.c)
# Create corresponding executables
EXECUTABLES = $(SOURCES:.c=)

# Target to compile all .c files
all: $(EXECUTABLES)

# Rule to compile each .c file into an executable
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Target to compile and run a specific file
run:
	@read -p "Enter the program name (without .c): " file && $(CC) $(CFLAGS) $$file.c -o $$file && ./$$file

# Clean all executables
clean:
	rm -f $(EXECUTABLES)

# Help message
help:
	@echo "Usage:"
	@echo "  make                 - Compile all .c files"
	@echo "  make run FILE=<name> - Run a specific program"
	@echo "  make clean           - Remove all compiled executables"
	