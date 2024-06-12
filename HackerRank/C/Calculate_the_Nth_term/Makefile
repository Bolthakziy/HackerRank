CC = gcc
TARGET = Calculate_the_Nth_term.out
OBJS = Calculate_the_Nth_term.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Calculate_the_Nth_term.c
	$(CC) -c -o $(OBJS) Calculate_the_Nth_term.c

clean :
	rm $(OBJS)
	rm $(TARGET)
