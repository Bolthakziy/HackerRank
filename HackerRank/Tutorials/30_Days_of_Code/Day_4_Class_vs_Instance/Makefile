CC = g++
TARGET = Day_4_Class_vs_Instance.out
OBJS = Day_4_Class_vs_Instance.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Day_4_Class_vs_Instance.cpp
	$(CC) -c -o $(OBJS) Day_4_Class_vs_Instance.cpp

clean :
	rm $(OBJS)
	rm $(TARGET)
