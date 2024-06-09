CC = gcc
TARGET = Array_Reversal.out
OBJS = Array_Reversal.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Array_Reversal.c
	$(CC) -c -o $(OBJS) Array_Reversal.c

clean :
	rm $(TARGET)
	rm $(OBJS)
