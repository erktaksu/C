#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
ternary operator
value?value2:value3
true ise value2 
false ise value3
*/

int main() {
	int x = 0;
	int z = x++ || x;     // || (veya) dan �ncekileri i�leme soktu sonra veya op gerceklesti
	printf("%d\n", z);

	int a = 10, b = 40 ,c;
	c = (a, b); // virgul operator en b�y���n� ald�
	printf("%d\n", c);

	int value1 = 10, value2 = 20,max; //ternary operator
	max = value2 > value1 ? value2 : value1; //sol taraf true bu nedenle value2 al�nd�.
	printf("max deger=%d", max);

	//for (;;) sonsuz d�ng�
	return 0;
}