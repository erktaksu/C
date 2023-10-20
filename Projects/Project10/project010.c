#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
static �m�rl� nesneler program ba�lad��� zaman ba�lar ve bitene kadar
bellekte yer edinir
otomatik �m�r=Bildirildikleri blokta, bildirildikleri yerde �m�rleri 
ba�lay�p bildirildikleri blo�un sonunda �m�rleri sonlanan nesnelerdir. 
*/
int y; //static �m�rl� globelde oldu�u i�in ilk de�ere 0 atar


int f1() {
int x=20; //otomatik �m�rl� ilk de�er atamas� yap�lmazsa ��p deger atar

x++;
printf("%d\n", x);
}
int f2() {
	static int x = 20; //otomatik �m�rl� ilk de�er atamas� yap�lmazsa ��p deger atar

	x++;
	printf("%d\n", x);
}

	
int main() {
	printf("otomtik nesne tanimi=\n ");
	f1(); //otomatik nesne i�in �a�r� yapt�k 21 oldu ��kt� nesne sonland�
	f1();// ve yine �a�r� yap�nca 21 oldu scope i�inde nesne tan�mlad� ��k�nca sonland�
	printf("static nesne tanimi=\n");
	f2(); //21  bellekte tek adres �zerinde tutar
	f2();  //22 artt� ��nk� static nesne tan�m� program sonlana kadar bellekte kendini tutar
}