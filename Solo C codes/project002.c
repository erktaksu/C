#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
int x=10 ,y=20

if(x>8)
   if(y<26)
   printf("onaylandi");
//bundan sonra yaz�lcak else k�me parantezi olmad��� i�in en yak�n if ile e�le�cek buna dangling else denir
   else
   printf("onaylanmadi");

*/





int main() {
	/*
	
	int x, y, z,max;
	printf("uc farkl� deger giriniz=");   //ve veya op kullanmadan 3 say�n�n en buyugunu bulma
	scanf("%d %d %d", &x, &y, &z);
	
	if (x > y)
		if (x > z)
			max = x;
		else //z>x
			max = z;
	else
		if (y > z)
			max = y;
		else
			max = z;
	printf("en buyuk deger=%d", max);
	
	
	*/
	
			

	int value;
	scanf("%d", &value);

	switch (value) {
	case 0:   // 0 girince break g�rene kadar devam eder
	case 1:   //value 1 ise case 1 deki i�lemi yap
		printf("deger 1");
		break;  //switchten ��kart�r ayn� zamanda d�ng�lerden de ��kar�r.
	case 2:
		printf("deger 2"); //value 2 ise case 2 deki i�lemi yap
		break;
	default: 
		printf("gecersiz girdi");  //e�er case lerde bulunmayan deger girilirse bunu yazd�r.
		break; //default k�sm� �stte olursa break kesinlikle kullan�lmal�
	}
	
	

	




	return 0;
}