#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//kullanýcýdan para alýnacak alýnan para 50 20 10 5 1 lik olarak yazýlcak

int main() {

	int money;
	int ellilik,yirmilik,onluk,beslik,birlik;
	printf("para giriniz=");
	scanf("%d", &money);

    ellilik = money / 50;

	yirmilik = (money % 50) / 20;
	onluk = ((money % 50) % 20) / 10;
	beslik= (((money % 50) % 20) % 10)/5;
	birlik = ((((money % 50) % 20) % 10) % 5)/1;
	printf("50 lik=%d 20 lik=%d 10 luk=%d 5 lik=%d 1 lik=%d", ellilik, yirmilik,onluk,beslik,birlik);

	return 0;
}