#ifndef EXCEPTION_H
#define EXCEPTION_H

#include "stdio.h"
#include "stdlib.h"
#include "setjmp.h"

jmp_buf jumper;

#define try do{ if( !setjmp(jumper) ){ 
#define catch } else {
#define tryEnd } }while(0)   
#define throw longjmp(jumper, 1)

struct EXCEPTION{
	char *mesaj;
	
	char* (*getMessage)(struct EXCEPTION*);
	void (*yoket)(struct EXCEPTION*);
};
typedef struct EXCEPTION* Exception;

Exception ExceptionOlustur(char*);
char* getMessage(const Exception);
void ExceptionYoket(const Exception);


#endif
