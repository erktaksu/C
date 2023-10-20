#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//                                        DONGULER
/*
while(){
}  while çýktýðýnda içindeki yürütülür
****************************************************************************************
do{
 
 önce bura yürütülür
}
while(); burda da ifadeyi kontrol eder
*****************************************************************************************
for (int i=0; i < 10; i++) {
		printf("%d\n", i); //int i ye bakýldý sonra koþula bakýldý printf yazýldý sonra i yi arttýrdý 
		//sýralama= int i - i<10 - printf(); - i++
	}
*/
/*
goto git;

arada kod yürütülmez

git;                      //iç içe döngülerden çýkmanýn kolay yolu

kod burdan devam eder

*/

//dögüden break return ile çýkýlabilir.
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