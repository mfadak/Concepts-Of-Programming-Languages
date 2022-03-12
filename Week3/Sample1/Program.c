#include "stdio.h"

const char* SehirDondur(){
	const char *str = "Sakarya";
	return str;
}
char* SehirDondur2(){
	char str[] = "Ankara";
	return str;
}

int main(){
	printf("%s\n",SehirDondur());    // Ekrana Sakarya yazar
	printf("%s\n",SehirDondur2());  // Ekrana bir şey yazmaz ve derlenmede uyarı verir.
	return 0;
}
