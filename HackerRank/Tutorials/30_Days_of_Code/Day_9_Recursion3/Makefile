CC = gcc
TARGET = Day_9_Recursion3.out
OBJS = Day_9_Recursion3.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_9_Recursion3.c
	$(CC) -c -o $(OBJS) Day_9_Recursion3.c

clean :
	rm $(OBJS)
	rm $(TARGET)
