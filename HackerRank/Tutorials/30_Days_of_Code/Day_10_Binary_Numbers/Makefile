CC = gcc
TARGET = Day_10_Binary_Numbers.out
OBJS = Day_10_Binary_Numbers.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_10_Binary_Numbers.c
	$(CC) -c -o $(OBJS) Day_10_Binary_Numbers.c

clean :
	rm $(OBJS)
	rm $(TARGET)
