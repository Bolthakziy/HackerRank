CC = gcc
TARGET = Day_6_Lets_Review.out
OBJS = Day_6_Lets_Review.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_6_Lets_Review.c
	$(CC) -c -o $(OBJS) Day_6_Lets_Review.c

clean :
	rm $(OBJS)
	rm $(TARGET)
