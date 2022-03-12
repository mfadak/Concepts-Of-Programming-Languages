#include "stdio.h"
#include "stdlib.h"
int main(){
	int *yas = malloc(sizeof(int)); // Heap bellek bölgesi
	*yas = 30;
	printf("%d\n",*yas);
	int *p;                                         // adresi yok
	free(yas);
    return 0;
}
