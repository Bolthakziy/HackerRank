CC = gcc
TARGET = Day_5_Loops.out
OBJS = Day_5_Loops.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_5_Loops.c
	$(CC) -c -o $(OBJS) Day_5_Loops.c

clean :
	rm $(OBJS)
	rm $(TARGET)
