#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define DGM 3


int main() {

#if DGM<6
	
	printf("iceri girdi");
#else
	printf("uyumsuz kosul");

#endif //0


	printf("\n%s\n", __FILE__); //kaynak dosyan�n yeri
	printf("%d\n", __LINE__); //OLDU�U SATIRIN SAYISINI G�STER�R
	printf("%s\n", __DATE__); //TAR�H
	printf("%s\n", __TIME__); //SAAT
	printf("%s\n", __func__); //hangi fonksiyonda oldu�unu g�sterir

	return 0;
}
