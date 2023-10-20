#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//                     FONKS�YON

/*
void fonksiyonu geri d�n�� de�eri olmayan fonksiyondur

**************************************************************************************
variadic fonksiyonlar de�i�ken say�da  arg�man tutar 

int f(int x, int y,...); en az bir arg�man ge�ilmesi laz�m 
printf(); bir variadic fonksiyondur
***************************************************************************************

CALL BY REFERANCE  pointer �a��rma
CALL BY VALUE  fonksiyonlar� de�er ile �a��rma
*/
void ptr(int *y) {
	//CALL BY REFERANCE
	*y = 100;    //direk adrese m�dahele etti�i i�in bir geri d�n��e gerek yok
}
int fonc(int x) {
	//CALL BY VALUE
	x = 200;
	return x;
}
int main() {
	int a = 50;
	int b =10;
	ptr(&b);  //b nin adresine ptr fonksiyonunda 100 atand� art�k b=100; diyebiliriz bu esnadan sonra
	int result=fonc(a);
	printf("a=%d b ptr=%d", result,b);
	
}