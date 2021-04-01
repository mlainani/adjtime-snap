CFLAGS = -Wall -Werror

all: peekaboo

clean:
	@ rm -f peekaboo

peekaboo: main.c
	$(CC) $(CFLAGS) main.c -o peekaboo

install:
	@ echo Installing...
	@ mkdir -p $(DESTDIR)/bin
	@ cp peekaboo $(DESTDIR)/bin
