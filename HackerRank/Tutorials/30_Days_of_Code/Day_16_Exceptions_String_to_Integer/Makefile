CC = g++
TARGET = Day_16_Exception_String_to_Integer.out
OBJS = Day_16_Exception_String_to_Integer.o
SRCS = Day_16_Exception_String_to_Integer.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
