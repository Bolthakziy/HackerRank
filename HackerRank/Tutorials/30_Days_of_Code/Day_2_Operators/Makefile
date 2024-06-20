CC = gcc
TARGET = Day_2_Operators.out
OBJS = Day_2_Operators.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : Day_2_Operators.c
	$(CC) -c -o $(OBJS) Day_2_Operators.c

clean :
	rm $(OBJS)
	rm $(TARGET)
