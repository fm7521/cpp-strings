main: main.o liba.o libb.o
	clang *.o -o $@

%.o: %.c %.h
	clang $< -c
