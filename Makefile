CC := gcc
CFLAGS = -g

all: football.exe temperature.exe

football.exe: football_main.o football.o
# fill in commands here
	$(CC) $(CFLAGS) -o football.exe football_main.o football.o
football_main.o: football_main.c football.h
	$(CC) $(CFLAGS) -c football_main.c
football.o: football.c football.h
	$(CC) $(CFLAGS) -c football.c


temperature.exe: temperature_main.o temperature.o
# fill in commands here
	$(CC) $(CFLAGS) -o temperature.exe temperature_main.o temperature.o
temperature_main.o: temperature_main.c temperature.h
	$(CC) $(CFLAGS) -c temperature_main.c
temperature.o: temperature.c temperature.h
	$(CC) $(CFLAGS) -c temperature.c

clean:
	rm -f *.o *.exe