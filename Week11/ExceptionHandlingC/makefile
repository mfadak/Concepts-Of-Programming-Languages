hepsi: derle calistir

derle:
	gcc -I ./include/ -o ./lib/Exception.o -c ./src/Exception.c
	gcc -I ./include/ -o ./lib/YetersizBakiye.o -c ./src/YetersizBakiye.c
	gcc -I ./include/ -o ./lib/HataliMiktar.o -c ./src/HataliMiktar.c
	gcc -I ./include/ -o ./lib/Hesap.o -c ./src/Hesap.c
	gcc -I ./include/ -o ./bin/Test ./lib/Exception.o ./lib/YetersizBakiye.o ./lib/HataliMiktar.o ./lib/Hesap.o ./src/Test.c
	
calistir:
	./bin/Test
