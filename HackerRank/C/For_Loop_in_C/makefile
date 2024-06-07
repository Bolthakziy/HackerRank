CC = gcc
TARGET = For_Loop_in_C.out
OBJS = For_Loop_in_C.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : For_Loop_in_C.c
	$(CC) -c -o $(OBJS) For_Loop_in_C.c

clean :
	rm $(OBJS)
	rm $(TARGET)
