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
	int z = x++ || x;     // || (veya) dan öncekileri iþleme soktu sonra veya op gerceklesti
	printf("%d\n", z);

	int a = 10, b = 40 ,c;
	c = (a, b); // virgul operator en büyüðünü aldý
	printf("%d\n", c);

	int value1 = 10, value2 = 20,max; //ternary operator
	max = value2 > value1 ? value2 : value1; //sol taraf true bu nedenle value2 alýndý.
	printf("max deger=%d", max);

	//for (;;) sonsuz döngü
	return 0;
}