CC = gcc
TARGET = Day_11_2D_Arrays.out
OBJS = Day_11_2D_Arrays.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_11_2D_Arrays.c
	$(CC) -c -o $(OBJS) Day_11_2D_Arrays.c

clean :
	rm $(OBJS)
	rm $(TARGET)
