#include "Hesap.h"

Hesap HesapOlustur(){
	Hesap this;
	this = (Hesap)malloc(sizeof(struct HESAP));
	this->bakiye = 0;
	this->yetersizbakiye = YetersizBakiyeOlustur("Yetersiz Bakiye");
	this->hataliMiktar = HataliMiktarOlustur("Hatali Miktar");
	this->paraCek = &paraCek;
	this->paraYatir = &paraYatir;
	this->getBakiye = &getBakiye;
	this->yoket= &HesapYoket;
	return this;
}
void paraCek(const Hesap this,double miktar){
	if(miktar > this->bakiye) throw;
	this->bakiye -= miktar;
}
void paraYatir(const Hesap this,double miktar){
	if(miktar <= 0) throw;
	this->bakiye += miktar;
}
double getBakiye(const Hesap this){
	return this->bakiye;
}
void HesapYoket(const Hesap this){
	if(this == NULL) return;
	this->yetersizbakiye->yoket(this->yetersizbakiye);
	this->hataliMiktar->yoket(this->hataliMiktar);
	free(this);
}
