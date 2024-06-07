CC = gcc
TARGET = Functions_in_C.out
OBJS = Functions_in_C.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

Functions_in_C.o : Functions_in_C.c
	$(CC) -c -o Functions_in_C.o Functions_in_C.c

clean :
	rm $(OBJS)
	rm $(TARGET)
