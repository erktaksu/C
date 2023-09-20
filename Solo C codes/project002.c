#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
int x=10 ,y=20

if(x>8)
   if(y<26)
   printf("onaylandi");
//bundan sonra yazýlcak else küme parantezi olmadýðý için en yakýn if ile eþleþcek buna dangling else denir
   else
   printf("onaylanmadi");

*/





int main() {
	/*
	
	int x, y, z,max;
	printf("uc farklý deger giriniz=");   //ve veya op kullanmadan 3 sayýnýn en buyugunu bulma
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
	case 0:   // 0 girince break görene kadar devam eder
	case 1:   //value 1 ise case 1 deki iþlemi yap
		printf("deger 1");
		break;  //switchten çýkartýr ayný zamanda döngülerden de çýkarýr.
	case 2:
		printf("deger 2"); //value 2 ise case 2 deki iþlemi yap
		break;
	default: 
		printf("gecersiz girdi");  //eðer case lerde bulunmayan deger girilirse bunu yazdýr.
		break; //default kýsmý üstte olursa break kesinlikle kullanýlmalý
	}
	
	

	




	return 0;
}