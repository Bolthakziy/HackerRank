CC = gcc
TARGET = Permutation_of_Strings.out
OBJS = Permutation_of_Strings.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Permutation_of_Strings.c
	$(CC) -c -o $(OBJS) Permutation_of_Strings.c

clean :
	rm $(OBJS)
	rm $(TARGET)
