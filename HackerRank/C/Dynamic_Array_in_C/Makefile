CC = gcc
TARGET = Dynamic_Array_in_C.out
OBJS = Dynamic_Array_in_C.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Dynamic_Array_in_C.c
	$(CC) -c -o $(OBJS) Dynamic_Array_in_C.c

clean :
	rm $(OBJS)
	rm $(TARGET)
