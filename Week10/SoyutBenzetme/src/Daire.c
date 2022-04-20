#include "Daire.h"

Daire DaireOlustur(double yaricap,char* renk){
	Daire this;
	this = (Daire)malloc(sizeof(struct DAIRE));
	this->super = SekilOlustur(renk);
	this->yaricap = yaricap;
	this->super->alan = &Alan;
	this->super->cevre = &Cevre;
	this->yoket = &DaireYoket;
	return this;
}
double Alan(const Daire this){
	return M_PI*pow(this->yaricap,2);
}
double Cevre(const Daire this){
	return 2*M_PI*this->yaricap;
}
void DaireYoket(const Daire this){
	if(this == NULL) return;
	this->super->yoket(this->super);
	free(this);
}
