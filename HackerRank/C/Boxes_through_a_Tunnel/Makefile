CC = gcc
TARGET = Boxes_through_a_Tunnel.out
OBJS = Boxes_through_a_Tunnel.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Boxes_through_a_Tunnel.c
	$(CC) -c -o $(OBJS) Boxes_through_a_Tunnel.c

clean :
	rm $(OBJS)
	rm $(TARGET)
