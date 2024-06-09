CC = gcc
TARGET = Printing_Pattern_Using_Loops.out
OBJS = Printing_Pattern_Using_Loops.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Printing_Pattern_Using_Loops.c
	$(CC) -c -o $(OBJS) Printing_Pattern_Using_Loops.c

clean :
	rm $(OBJS)
	rm $(TARGET)
