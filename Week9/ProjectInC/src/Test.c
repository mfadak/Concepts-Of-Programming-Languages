#include "Number.h"

int main(){
	Number num1 = new_Number(100);
	Number num2 = new_Number(100);
	Number num3 = new_Number(127);
	
	if(num1->equals(num1,num2)) printf("num1 is equal to num2\n");
	else printf("num1 and num2 are not equal\n");
	
	if(num3->isPrime(num3)) printf("num3 is prime number\n");
	else printf("num3 is not prime number\n");
	
	short* num3Digits = num3->getDigits(num3);
	printf("num3 digits: ");
	int index;
	for(index =0;index<3;index++){
		printf("%d ",num3Digits[index]);
	}
	free(num3Digits);
	printf("\n");
	
	char* num1Str = num1->toString(num1);
	printf("num1 is %s\n",num1Str);
	
	char* num2Str = num2->toString(num2);
	printf("num2 is %s\n",num2Str);
	
	char* num3Str = num3->toString(num3);
	printf("num3 is %s\n",num3Str);
	
	free(num1Str);
	free(num2Str);
	free(num3Str);
	
	num1->delete(num1);
	num2->delete(num2);
	num3->delete(num3);
	
	return 0;
}
