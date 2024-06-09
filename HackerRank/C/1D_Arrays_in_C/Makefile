CC = gcc
TARGET = 1D_Arrays_in_C.out
OBJS = 1D_Arrays_in_C.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : 1D_Arrays_in_C.c
	$(CC) -c -o $(OBJS) 1D_Arrays_in_C.c

clean :
	rm $(OBJS)
	rm $(TARGET)
