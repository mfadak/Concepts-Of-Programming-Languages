#ifndef DAIRE_H
#define DAIRE_H

#include "Sekil.h"

struct DAIRE{
	Sekil super;
	double yaricap;
	
	void (*yoket)(struct DAIRE*);
};
typedef struct DAIRE* Daire;

Daire DaireOlustur(double,char*);
double Alan(const Daire);
double Cevre(const Daire);
void DaireYoket(const Daire);
#endif
