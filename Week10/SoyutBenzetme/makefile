hepsi: derle calistir

derle:
	gcc -I ./include/ -o ./lib/Sekil.o -c ./src/Sekil.c
	gcc -I ./include/ -o ./lib/Daire.o -c ./src/Daire.c
	gcc -I ./include/ -o ./lib/Kare.o -c ./src/Kare.c
	gcc -I ./include/ -o ./bin/Test ./lib/Sekil.o ./lib/Daire.o ./lib/Kare.o ./src/Test.c

calistir:
  ./bin/Test
