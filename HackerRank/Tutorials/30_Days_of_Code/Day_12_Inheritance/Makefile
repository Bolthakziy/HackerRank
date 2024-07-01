CC = g++
TARGET = Day_12_Inheritance.out
OBJS = Day_12_Inheritance.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(TARGET)
	$(CC) -c -o $(OBJS) Day_12_Inheritance.cpp

clean :
	rm $(OBJS)
	rm $(TARGET)
