#ifndef YETERSIZBAKIYE_H
#define YETERSIZBAKIYE_H

#include "Exception.h"

struct YETERSIZBAKIYE{
	Exception super;
	
	char* (*getMessage)(struct EXCEPTION*);
	void (*yoket)(struct YETERSIZBAKIYE*);
};
typedef struct YETERSIZBAKIYE* YetersizBakiye;

YetersizBakiye YetersizBakiyeOlustur(char*);
void YetersizBakiyeYoket(const YetersizBakiye);

#endif
