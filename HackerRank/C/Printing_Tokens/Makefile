CC = gcc
TARGET = Printing_Tokens.out
OBJS = Printing_Tokens.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Printing_Tokens.c
	$(CC) -c -o $(OBJS) Printing_Tokens.c

clean :
	rm $(OBJS)
	rm $(TARGET)
