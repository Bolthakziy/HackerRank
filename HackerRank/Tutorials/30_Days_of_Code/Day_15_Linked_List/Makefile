CC = gcc
TARGET = Day_15_Linked_List.out
OBJS = Day_15_Linked_List.o
SRCS = Day_15_Linked_List.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
