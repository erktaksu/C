#include<stdio.h>
#include"mylibrary.h"
/*
* *******************************************************************
bitsel | veya operatörü

 1|0 = 1        0|1 = 1       1|1 = 1    0|0 = 0

x= 12    01100
y= 23    10111

x|y =31  11111

*********************************************************************
 Setting a bit
 1000 ?011
 0000 1000
 bitsel veya ya girer
 1000 1011 oldu.
 ********************************************************************
 ~ prefix unariy
 1011
 0100   1 ler 0 a 0 lar  1 döner
 ********************************************************************
 & bitsel ve operatörü
  1|0 = 0        0|1 = 0       1|1 = 1    0|0 = 0
  x= 12    01100
  y= 23    10111

x&y =4   00100
**********************************************************************
Getting a bit (testing a bit)
0000 1000
0000 1000
0000 1000 bitsel ve ye sokulmuþ hali ve o bitin 1 olduðunu teyit ettik
**********************************************************************
Clear a bit
0000 1000
0000 0000
0000 0000  bitsel ve ye sokulmuþ hali o biti 0 yaptý
***********************************************************************
xor ^

 01010
 00100

 01110  operandlarý farklýysa 1 degilse 0
 **********************************************************************
 flip a bit(togle)
 bir tam sayýný belirli bir bitini deðiþtirmek için
 1000 1001
 0000 1000 xor ^
 1000 0001
*/
int main() {
	printf(" bit | opr  *********************************************************\n");
	int x = 12;
	int y = 23;
	int z = 13;
	printBits(x);
	printBits(y);
	printBits(x | y);
	int value = x | y;
	printf("%d\n", value);
	printf("set bit *********************************************************\n");
	printBits(z);
	z |= (1 << 6);
	printBits(z);
	printf("%d\n", z);
	printf("bitsel degil *********************************************************\n");
	printBits(x);  //0000 0000 0000 0000 0000 0000 0000 1100
	printBits(~x); //1111 1111 1111 1111 1111 1111 1111 0011
	printBits(~~x);//0000 0000 0000 0000 0000 0000 0000 1100
	printf("~x=%d\n", ~x);
	printf("and operator *********************************************************\n");
	printBits(x);
	printBits(y);
	printBits(x & y);
	int deger = x & y;
	printf("%d\n", deger);
	printf("getting  *********************************************************\n");
	int a = 10;
	printBits(a);
	if (a & (1 << 2))
		printf("3. yani 2.bit 1'dir.\n");
	else
		printf("3. yani 2.bit 0'dir.\n");
	printf("clear *********************************************************\n");
	printBits(a);
	a &= ~(1 << 1);
	printBits(a);
	printf("xor *********************************************************\n");
	int b = 10;
	int c = 20;
	printBits(b);
	printBits(c);
	printBits(b ^ c);
	printf("flip a bit *********************************************************\n");
	int d = 123;
	printBits(d);
	d ^= (1 << 3);
	printBits(d);
	printf("%d", d); //115 sonuç farklýysa 1 degilse farklý deðildi ve 0 oldu
}