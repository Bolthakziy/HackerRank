CC = gcc
TARGET = Day_1_Data_Types.out
OBJS = Day_1_Data_Types.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_1_Data_Types.c
	$(CC) -c -o $(OBJS) Day_1_Data_Types.c

clean :
	rm $(OBJS)
	rm $(TARGET)
