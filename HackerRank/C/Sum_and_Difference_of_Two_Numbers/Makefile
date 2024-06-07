CC = gcc
TARGET = Sum_and_Difference_of_Two_Numbers.out
OBJS = Sum_and_Difference_of_Two_Numbers.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

Sum_and_Differnece_of_Two_Numbers.o : Sum_and_Difference_of_Two_Numbers.c
	$(CC) -c -o Sum_and_Difference_of_Two_Numbers.o Sum_and_differnece_of_Two_Numbers.c

clean :
	rm $(OBJS)
	rm $(TARGET)
