CC = gcc
TARGET = Bitwise_Operators.out
OBJS = Bitwise_Operators.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Bitwise_Operators.c
	$(CC) -c -o $(OBJS) Bitwise_Operators.c

clean :
	rm $(OBJS)
	rm $(TARGET)
