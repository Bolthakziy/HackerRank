CC = gcc
TARGET = Digit_Frequency.out
OBJS = Digit_Frequency.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Digit_Frequency.c
	$(CC) -c -o $(OBJS) Digit_Frequency.c

clean :
	rm $(OBJS)
	rm $(TARGET)
