#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//                     FONKSÝYON

/*
void fonksiyonu geri dönüþ deðeri olmayan fonksiyondur

**************************************************************************************
variadic fonksiyonlar deðiþken sayýda  argüman tutar 

int f(int x, int y,...); en az bir argüman geçilmesi lazým 
printf(); bir variadic fonksiyondur
***************************************************************************************

CALL BY REFERANCE  pointer çaðýrma
CALL BY VALUE  fonksiyonlarý deðer ile çaðýrma
*/
void ptr(int *y) {
	//CALL BY REFERANCE
	*y = 100;    //direk adrese müdahele ettiði için bir geri dönüþe gerek yok
}
int fonc(int x) {
	//CALL BY VALUE
	x = 200;
	return x;
}
int main() {
	int a = 50;
	int b =10;
	ptr(&b);  //b nin adresine ptr fonksiyonunda 100 atandý artýk b=100; diyebiliriz bu esnadan sonra
	int result=fonc(a);
	printf("a=%d b ptr=%d", result,b);
	
}