CC = gcc
TARGET = Day_7_Arrays.out
OBJS = Day_7_Arrays.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_7_Arrays.c
	$(CC) -c -o $(OBJS) Day_7_Arrays.c

clean :
	rm $(OBJS)
	rm $(TARGET)
