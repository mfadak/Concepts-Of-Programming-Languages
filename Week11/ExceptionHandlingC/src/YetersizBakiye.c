#include "YetersizBakiye.h"

YetersizBakiye YetersizBakiyeOlustur(char* mesaj){
	YetersizBakiye this;
	this = (YetersizBakiye)malloc(sizeof(struct YETERSIZBAKIYE));
	this->super = ExceptionOlustur(mesaj);
	this->getMessage = this->super->getMessage;
	this->yoket = &YetersizBakiyeYoket;
	return this;
}
void YetersizBakiyeYoket(const YetersizBakiye this){
	if(this == NULL) return;
	this->super->yoket(this->super);
	free(this);
}
