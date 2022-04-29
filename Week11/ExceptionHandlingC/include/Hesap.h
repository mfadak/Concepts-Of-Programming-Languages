#ifndef HESAP_H
#define HESAP_H

#include "YetersizBakiye.h"
#include "HataliMiktar.h"

struct HESAP{
	double bakiye;
	YetersizBakiye yetersizbakiye;
	HataliMiktar hataliMiktar;
	
	void (*paraCek)(struct HESAP*,double);
	void (*paraYatir)(struct HESAP*,double);
	double (*getBakiye)(struct HESAP*);
	void (*yoket)(struct HESAP*);
};
typedef struct HESAP* Hesap;

Hesap HesapOlustur();
void paraCek(const Hesap,double);
void paraYatir(const Hesap,double);
double getBakiye(const Hesap);
void HesapYoket(const Hesap);

#endif
