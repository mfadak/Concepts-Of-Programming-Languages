#include "Kare.h"

Kare KareOlustur(double kenar,char* renk){
	Kare this;
	this = (Kare)malloc(sizeof(struct KARE));
	this->super = SekilOlustur(renk);
	this->kenar = kenar;
	this->super->alan = &alan;
	this->super->cevre = &cevre;
	this->yoket = &KareYoket;
	return this;
}
double alan(const Kare this){
	return pow(this->kenar,2);
}
double cevre(const Kare this){
	return 4*this->kenar;
}
void KareYoket(const Kare this){
	if(this == NULL) return;
	this->super->yoket(this->super);
	free(this);
}
