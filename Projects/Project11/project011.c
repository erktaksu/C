#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define DGM 3


int main() {

#if DGM<6
	
	printf("iceri girdi");
#else
	printf("uyumsuz kosul");

#endif //0


	printf("\n%s\n", __FILE__); //kaynak dosyanýn yeri
	printf("%d\n", __LINE__); //OLDUÐU SATIRIN SAYISINI GÖSTERÝR
	printf("%s\n", __DATE__); //TARÝH
	printf("%s\n", __TIME__); //SAAT
	printf("%s\n", __func__); //hangi fonksiyonda olduðunu gösterir

	return 0;
}
