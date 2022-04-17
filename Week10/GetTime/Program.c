#include "stdio.h"
#include "stdlib.h"
#include "time.h"

char* ZamanGetir(){
	char* buff = malloc(sizeof(char)*100);
	time_t simdi = time(0);
	strftime(buff,100,"%Y-%m-%d %H:%M",localtime(&simdi));
	return buff;
}

int main(){
	char* zaman = ZamanGetir();	
	printf("Zaman: %s\n",zaman);
	free(zaman);
	return 0;
}
