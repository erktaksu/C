#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
// type cast tür dönüþümleri

int main() {
/*
	int ival1 = 10;    
	int ival2 = 4; //eger biri double olsa double yükselcek
	double result = (double)ival1 / ival2; //ival 1 double oldu ival 2 de double yükseldi ve sonuç ondalýklý oldu
	printf("%lf", result);

*/
	unsigned int y = 1; //sadece ilk bit 2^0 1 oldu 
	int x = -1;  //tüm bitler 1

	if (y > x)  //bu nedele x daha  büyük
		printf("true");
	else
		printf("false");



	return 0;
}