#include "Exception.h"

Exception ExceptionOlustur(char* mesaj){
	Exception this;
	this = (Exception)malloc(sizeof(struct EXCEPTION));
	this->mesaj = mesaj;
	
	this->getMessage = &getMessage;
	this->yoket = &ExceptionYoket;
	return this;
}
char* getMessage(const Exception this){
	return this->mesaj;
}
void ExceptionYoket(const Exception this){
	if(this == NULL) return;
	free(this);
}
