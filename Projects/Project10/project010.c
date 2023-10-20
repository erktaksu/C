#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
static ömürlü nesneler program baþladýðý zaman baþlar ve bitene kadar
bellekte yer edinir
otomatik ömür=Bildirildikleri blokta, bildirildikleri yerde ömürleri 
baþlayýp bildirildikleri bloðun sonunda ömürleri sonlanan nesnelerdir. 
*/
int y; //static ömürlü globelde olduðu için ilk deðere 0 atar


int f1() {
int x=20; //otomatik ömürlü ilk deðer atamasý yapýlmazsa çöp deger atar

x++;
printf("%d\n", x);
}
int f2() {
	static int x = 20; //otomatik ömürlü ilk deðer atamasý yapýlmazsa çöp deger atar

	x++;
	printf("%d\n", x);
}

	
int main() {
	printf("otomtik nesne tanimi=\n ");
	f1(); //otomatik nesne için çaðrý yaptýk 21 oldu çýktý nesne sonlandý
	f1();// ve yine çaðrý yapýnca 21 oldu scope içinde nesne tanýmladý çýkýnca sonlandý
	printf("static nesne tanimi=\n");
	f2(); //21  bellekte tek adres üzerinde tutar
	f2();  //22 arttý çünkü static nesne tanýmý program sonlana kadar bellekte kendini tutar
}