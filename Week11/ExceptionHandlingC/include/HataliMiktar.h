#ifndef HATALIMIKTAR_H
#define HATALIMIKTAR_H

#include "Exception.h"

struct HATALIMIKTAR{
	Exception super;
	
	void (*yoket)(struct HATALIMIKTAR*);
	char* (*getMessage)(struct EXCEPTION*);
};
typedef struct HATALIMIKTAR* HataliMiktar;

HataliMiktar HataliMiktarOlustur(char*);
void HataliMiktarYoket(const HataliMiktar);

#endif
