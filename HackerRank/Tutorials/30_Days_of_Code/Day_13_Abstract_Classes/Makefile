CC = g++
TARGET = Day_13_Abstract_Classes.out
OBJS = Day_13_Abstract_Classes.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_13_Abstract_Classes.cpp
	$(CC) -c -o $(OBJS) Day_13_Abstract_Classes.cpp

clean :
	rm $(OBJS)
	rm $(TARGET)
