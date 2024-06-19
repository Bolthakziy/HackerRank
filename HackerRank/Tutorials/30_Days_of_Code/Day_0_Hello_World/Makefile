CC = gcc
TARGET = Day_0_Hello_World.out
OBJS = Day_0_Hello_World.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : Day_0_Hello_World.c
	$(CC) -c -o $(OBJS) Day_0_Hello_World.c

claen :
	rm $(OBJS)
	rm $(TARGET)
