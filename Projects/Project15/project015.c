#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"mylibrary.h"

/*
<< en soldaki biti çýkarýr

>> bitsel sað kaydýrma
op1>>op2
Sol operand isaretsiz bir tam sayi türündense besleme SIFIR ile.
Sol operand Isaretli ama pozitif Ise besleme SIFIR ile
Hem Isaretll hemde negatif bir degerse beslemenin 0 mi 1 mi olacaga derliyiciye bagla.
bende 1 oluyor deðiþebilir
*/


int main() {
	unsigned int x = 15; // 0000 0000 0000 0000 0000 0000 0000 1111
	unsigned int y = 20;
	int z = 2;
	printf("x icin*******************************************************************\n");
	printBits(x);
	printf("%zu\n", sizeof(x)); //4 byte int
	printBits(x << 1); // 0000 0000 0000 0000 0000 0000 0001 1110
	printBits(x << 2); // 0000 0000 0000 0000 0000 0000 0011 1100
	printf("%d\n", x << 2); //2 ^ 2 * 15 = 60;
	printf("y icin*******************************************************************\n");
	printBits(y);
	printBits(y >> z);

}