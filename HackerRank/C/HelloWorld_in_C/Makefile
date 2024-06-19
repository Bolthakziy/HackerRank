CC = gcc
TARGET = Hello_World_in_C.out
OBJS = Hello_World_in_C.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : Hello_World_in_C.o
	$(CC) -c -o $(OBJS) Hello_World_in_C.c

claen :
	rm $(OBJS)
	rm $(TARGET)
