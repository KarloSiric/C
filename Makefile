# This is a Makefile for our C programming language.

# Compiler and flags
CC = clang
CFLAGS = -std=c18 -Wall -Wextra -Wnull-dereference -Wformat=2 -Wno-newline-eof -Wno-comment -pedantic -g

# Get all .c files in the directory
SOURCES = $(wildcard *.c)
# Create corresponding executables
EXECUTABLES = $(SOURCES:.c=)

# Target to compile all .c files
all: $(EXECUTABLES)

# Rule to compile each .c file into an executable
%: %.c
	@echo "\033[1;34mCompiling $<...\033[0m"
	$(CC) $(CFLAGS) $< -o $@
	@echo "\033[1;32mFinished $@.\033[0m"

# Force recompilation of all files without cleaning
rebuild: clean all
	@echo "\033[1;36mRebuilt all files!\033[0m"

# Option to force recompilation without cleaning
force:
	@echo "\033[1;33mForcing recompilation of all files...\033[0m"
	touch $(SOURCES)
	$(MAKE) all

# Clean all executables and logs
clean:
	rm -f $(EXECUTABLES) *.log

# Help message
help:
	@echo "Usage:"
	@echo "  make                 - Compile all .c files"
	@echo "  make logs            - Compile all files and generate logs for warnings/errors"
	@echo "  make clean           - Remove all compiled executables and logs"
	@echo "  make rebuild         - Clean and rebuild all files"
	@echo "  make force           - Force recompilation without cleaning"