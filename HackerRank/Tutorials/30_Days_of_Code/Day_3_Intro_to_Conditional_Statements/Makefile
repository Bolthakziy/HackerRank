CC = gcc
TARGET = Day_3_Intro_to_Conditional_Statements.out
OBJS = Day_3_Intro_to_Conditional_Statements.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_3_Intro_to_Conditional_Statements.c
	$(CC) -c -o $(OBJS) Day_3_Intro_to_Conditional_Statements.c

clean :
	rm $(OBJS)
	rm $(TARGET)
