#include "Daire.h"
#include "Kare.h"

int main(){
	Daire d = DaireOlustur(12,"Mavi");
	char* str = d->super->toString(d->super,d);
	printf("%s\n",str);
	free(str);
		
	printf("\n");
		
	Kare k = KareOlustur(5,"Siyah");
	str = k->super->toString(k->super,k);
	printf("%s\n",str);
	free(str);
	
	d->yoket(d);
	k->yoket(k);
	return 0;
}
