#include "stdio.h"
#include "locale.h"

int main()
{
  int sayi;
  setlocale(LC_ALL,"Turkish");
  do{
            printf("4 Basamaklı bir sayı girin:");
            scanf("%d",&sayi);
  }while(sayi<1000 || sayi>10000);
  
  short birler,onlar,yuzler,binler;
  binler=sayi/1000;
  yuzler=(sayi%1000)/100;
  onlar=(sayi%100)/10;
  birler=sayi%10;
  printf("\nBinler:%d\n",binler);
  printf("\nYüzler:%d\n",yuzler);
  printf("\nOnlar:%d\n",onlar);
  printf("\nBirler:%d\n",birler);
  getchar();
  return 0;
}
