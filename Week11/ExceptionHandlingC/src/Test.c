#include "Hesap.h"

int main(){
	Hesap hesap = HesapOlustur();
	
	try{
		hesap->paraCek(hesap,1000);
		printf("\nBakiye: %lf",hesap->getBakiye(hesap));
	}
	catch{
		printf("\n%s",hesap->yetersizbakiye->getMessage(hesap->yetersizbakiye->super));
	}
	tryEnd;
	
	hesap->yoket(hesap);
	return 0;
}
