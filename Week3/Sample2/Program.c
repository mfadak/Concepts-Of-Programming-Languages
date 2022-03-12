#include "stdio.h"
int main(){
    int x=100,y=50;
    int *p = &x;
    int *r = &y;                                
    int *tmp = p;
   p=r;
   r=tmp;
   printf("p:%d\n",*p);
   printf("r:%d\n",*r);
   
   printf("p:%X\n",p); // p’nin içinde barındırdığı adres
   printf("r:%X\n",r);  // r’nin içinde barındırdığı adres
   return 0;
}
