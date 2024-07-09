CC = g++
TARGET = Day_14_Scope.out
OBJS = Day_14_Scope.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_14_Scope.cpp
	$(CC) -c -o $(OBJS) Day_14_Scope.cpp

clean :
	rm $(OBJS)
	rm $(TARGET)
