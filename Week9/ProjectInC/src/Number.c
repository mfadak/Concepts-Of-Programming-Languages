#include "Number.h"

Number new_Number(int value){
	Number this;
	this = (Number)malloc(sizeof(struct NUMBER));
	this->value = value;
	this->getDigits = &getDigits;
	this->isPrime = &isPrime;
	this->equals = &equals;
	this->toString = &toString;
	this->delete = &delete_Number;
	
	return this;
}
short* splitDigits(int val){
	int digitslength = floor(log10(abs(val)))+1;
	short* digits = (short*)malloc(sizeof(short)*digitslength);
	int index;
	for(index=digitslength-1;index>=0;index--){
		digits[index]=val%10;
		val/=10;
	}
	return digits;
}
short* getDigits(const Number this){
	return splitDigits(this->value);
}
boolean isPrime(const Number this){
	int val;
	for(val=this->value-1;val>1;val--){
		if(this->value%val == 0) return false;
	}
	return true;
}
boolean equals(const Number this,const Number rgt){
	if(this == NULL || rgt == NULL) return false;
	return this->value == rgt->value;
}
char* toString(const Number this){
	int digitslength = floor(log10(abs(this->value)))+1;
	char* str = (char*)malloc(sizeof(char)*digitslength+1);
	snprintf(str,digitslength+1,"%d",this->value);
	return str;
}
void delete_Number(const Number this){
	if(this == NULL) return;
	free(this);
}
