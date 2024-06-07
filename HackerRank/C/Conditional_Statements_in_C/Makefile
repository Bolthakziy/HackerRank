CC = gcc
TARGET = Conditional_Statements_in_C.out
OBJS = Conditional_Statements_in_C.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Conditional_Statements_in_C.c
	$(CC) -c -o $(OBJS) Conditional_Statements_in_C.c

clean :
	rm $(OBJS)
	rm $(TARGET)
