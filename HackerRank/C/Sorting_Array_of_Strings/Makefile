CC = gcc
TARGET = Sorting_Array_of_Strings.out
OBJS = Sorting_Array_of_Strings.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Sorting_Array_of_Strings.c
	$(CC) -c -o $(OBJS) Sorting_Array_of_Strings.c

clean :
	rm $(OBJS)
	rm $(TARGET)
