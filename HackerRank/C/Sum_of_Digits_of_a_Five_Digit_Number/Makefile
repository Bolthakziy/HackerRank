CC = gcc
TARGET = Sum_of_Digits_of_a_Five_Digit_Number.out
OBJS = Sum_of_Digits_of_a_Five_Digit_Number.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Sum_of_Digits_of_a_Five_Digit_Number.c
	$(CC) -c -o $(OBJS) Sum_of_Digits_of_a_Five_Digit_Number.c

clean :
	rm $(OBJS)
	rm $(TARGET)
