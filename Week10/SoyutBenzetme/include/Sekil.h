#ifndef SEKIL_H
#define SEKIL_H

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#include "string.h"

struct SEKIL{
	char* renk;
	char* olusturulmaTarihi;
	
	void (*setRenk)(struct SEKIL*,char*);
	char* (*getolusturulmaTarihi)(struct SEKIL*);
	char* (*toString)(struct SEKIL*,void*);
	double (*alan)();
	double (*cevre)();
	void (*yoket)(struct SEKIL*);
};
typedef struct SEKIL* Sekil;

Sekil SekilOlustur(char*);
void setRenk(const Sekil,char*);
char* getolusturulmaTarihi(const Sekil);
char* toString(const Sekil,void*);
void SekilYoket(const Sekil);

#endif
