#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//                                        DONGULER
/*
while(){
}  while ��kt���nda i�indeki y�r�t�l�r
****************************************************************************************
do{
 
 �nce bura y�r�t�l�r
}
while(); burda da ifadeyi kontrol eder
*****************************************************************************************
for (int i=0; i < 10; i++) {
		printf("%d\n", i); //int i ye bak�ld� sonra ko�ula bak�ld� printf yaz�ld� sonra i yi artt�rd� 
		//s�ralama= int i - i<10 - printf(); - i++
	}
*/
/*
goto git;

arada kod y�r�t�lmez

git;                      //i� i�e d�ng�lerden ��kman�n kolay yolu

kod burdan devam eder

*/

//d�g�den break return ile ��k�labilir.
int main() {

	int i,num,flag=0;
	printf("bir sayi giriniz=");
	scanf("%d", &num);
    
	for(i=2;i<num;i++)
		if (num % i == 0) {
			flag = 1;
			break;

		}
	if (flag) {
		printf("asal sayi degildir");

	}
	else
		printf("asal sayidir");


}