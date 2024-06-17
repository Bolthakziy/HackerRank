cc = gcc
TARGET = Small_Triangles_Large_Triangles.out
OBJS = Small_Triangles_Large_Triangles.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : Small_Triangles_Large_Triangles.c
	$(CC) -c -o $(OBJS) Small_Triangles_Large_Triangles.c

clean :
	rm $(OBJS)
	rm $(TARGET)
