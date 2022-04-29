#include "HataliMiktar.h"

HataliMiktar HataliMiktarOlustur(char* mesaj){
	HataliMiktar this;
	this = (HataliMiktar)malloc(sizeof(struct HATALIMIKTAR));
	this->super = ExceptionOlustur(mesaj);
	this->getMessage = this->super->getMessage;
	this->yoket = &HataliMiktarYoket;
	return this;
}
void HataliMiktarYoket(const HataliMiktar this){
	if(this == NULL) return;
	this->super->yoket(this->super);
	free(this);
}
