CC = gcc
TARGET = Pointers_in_C.out
OBJS = Pointers_in_C.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Pointers_in_C.c
	$(CC) -c -o $(OBJS) Pointers_in_C.c

clean :
	rm $(OBJS)
	rm $(TARGET)
