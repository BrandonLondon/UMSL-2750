C	= gcc
CFLAGS	= -g
TARGET	= numpalin
OBJS	= numpalin.o function.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

function.o: function.c function.h
	$(CC) $(CFLAGS) -c function.c

.PHONY: clean
clean:
	/bin/rm -f *.o $(TARGET)
