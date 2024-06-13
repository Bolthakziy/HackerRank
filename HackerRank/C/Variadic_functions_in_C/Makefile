CC = gcc
TARGET = Variadic_functions_in_C.out
OBJS = Variadic_functions_in_C.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Variadic_functions_in_C.c
	$(CC) -c -o $(OBJS) Variadic_functions_in_C.c

clean :
	rm $(OBJS)
	rm $(TARGET)
