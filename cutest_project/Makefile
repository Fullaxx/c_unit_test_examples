CC = gcc
CFLAGS = -Iinclude -Itest

SRC = src/math.c
TEST_SRC = test/CuTest.c test/test_math.c test/test_runner.c

TARGET = test_runner

all: $(TARGET)

$(TARGET): $(SRC) $(TEST_SRC)
	$(CC) $(CFLAGS) -o $@ $^

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
