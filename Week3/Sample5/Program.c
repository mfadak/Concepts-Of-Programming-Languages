#include "stdio.h"
#include "stdlib.h"
int main(){
	int x=100;
	float a=12.5;
	void* obj;
	obj=&x;
	printf("%d\n",*(int*)(obj));
	obj=&a;
	printf("%.2f\n",*(float *)(obj));
  return 0;
}
