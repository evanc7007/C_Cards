# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Target executable
TARGET = cards

# Source files
SRCS = Card.c Deck.c cards.c
# Object files (automatically replace .c with .o for each source file)
OBJS = $(SRCS:.c=.o)

# Default target to build the main executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile object files for each .c file
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program with a sample file
run: $(TARGET)
	./$(TARGET) 

# Runs and cleans targets
.PHONY: run clean .run

.run: run clean