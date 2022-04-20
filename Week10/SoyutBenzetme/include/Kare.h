#ifndef KARE_H
#define KARE_H

#include "Sekil.h"

struct KARE{
	Sekil super;
	double kenar;
	
	void (*yoket)(struct KARE*);
};
typedef struct KARE* Kare;

Kare KareOlustur(double,char*);
double alan(const Kare);
double cevre(const Kare);
void KareYoket(const Kare);
#endif
