#ifndef NUMBER_H
#define NUMBER_H

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

typedef enum Bool{false, true}boolean;

struct NUMBER{
	int value;
	
	short* (*getDigits)(struct NUMBER*);
	boolean (*isPrime)(struct NUMBER*);
	boolean (*equals)(struct NUMBER*,struct NUMBER*);
	char* (*toString)(struct NUMBER*);
	void (*delete)(struct NUMBER*);
};
typedef struct NUMBER* Number;

Number new_Number(int);
short* getDigits(const Number);
boolean isPrime(const Number);
boolean equals(const Number,const Number);
char* toString(const Number);
void delete_Number(const Number);

#endif
