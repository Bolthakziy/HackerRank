CC = gcc
TARGET = HelloWorld_in_C.out
OBJS = HelloWorld_in_C.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

HelloWorld_in_C.o : HelloWorld_in_C.c
	$(CC) -c -o HelloWorld_in_C.o HelloWorld_in_C.c

clean :
	rm $(OBJS)
	rm $(TARGET)
