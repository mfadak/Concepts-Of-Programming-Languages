all: compile run

compile:
	gcc -I ./include/ -o ./lib/Number.o -c ./src/Number.c
	gcc -I ./include/ -o ./bin/Test ./lib/Number.o ./src/Test.c
	
run:
	./bin/Test
