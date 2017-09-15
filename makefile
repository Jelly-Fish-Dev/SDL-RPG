CC=g++
CFLAGS=-lSDL2
DEPS = Battler.h
OBJ = Battler.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

RPGmake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGSb)

clean:
	rm *.o RPGmake