CC = gcc
TARGET = Students_Marks_Sum.out
OBJS = Students_Marks_Sum.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Students_Marks_Sum.c
	$(CC) -c -o $(OBJS) Students_Marks_Sum.c

clean :
	rm $(OBJS)
	rm $(TARGET)
