#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//unsigned i�in printf("%u",.....); kullan�l�r negatif de�er ald�rmaz unsigned.
// printf("%x",.....) %x hexa desimal olarak bir ��k�� verir
/*
scanf de eger %d format�nda 123ab gibi de�er girerseniz ab yi almaz ama bufferda tutar
eger bir daha scanf le bir de�er almaya �al���rsan�z ald�rmaz ve ��p deger atar
ayn� zamanda %d format�nda ab123 yaparsan�z bu seferde ��k��ta yine ��p de�er atar

 int x=scanf  ba�ar�l� geri d�n�� de�erini x e atar.
*/
/*
FORMATSIZ G�R��-�IKI�

int getchar(void); karakterin kod numaras�n� al�r.  enter �da al�r
int putchar(int);  karakterin kod numaras�n� verir.


*/
// %c char i�in karakter ��kt�s� almak i�in
int main() {
	printf("ilk dosya\n");
    int a = 5;          //tam say�
	double b = 10.3;    //ondal�k
	float c= 5.33;      //ondal�k
	int value1; 
	int value2;
	printf("*****************************************************************************\n");
	printf("giris yapin=");
	int ch = getchar();
	printf("%d\n", ch);
	putchar(66);  //int t�r�n� asci deki kar��l���n� yazd�r�r 66=B
	printf("\n*****************************************************************************\n");
	printf("iki int turunden deger giriniz=");
    int x=scanf("%d%d", &value1,&value2); //formatli bir giri� kullan�c�dan deger almak
	printf("value1=%d value2=%d\n", value1,value2);
	printf("scanfin basarili geri donus degeri=%d\n", x);
	printf("*****************************************************************************\n");
	printf("a=%d\n", a); //int de�er i�in %d ��k�� format�
	printf("b=%.3lf\n", b); //double de�er i�in %lf ��k�� format�
	printf("c=%.3f\n", c); //float de�er i�in %f ��k�� format� float double dan daha az yer kaplar
   
	printf("*****************************************************************************\n");
	printf("int=%zu\n",sizeof(int)); // %zu ve sizeof kullanarak de�i�kenlerin bellekte kaplad��� boyutu g�r�yoruz.
	printf("short=%zu\n", sizeof(short));
	printf("char=%zu\n",sizeof(char));
	printf("long=%zu\n", sizeof(long));
	printf("long long=%zu\n",sizeof(long long));
	printf("float=%zu\n", sizeof(float));
	printf("double=%zu\n", sizeof(double));
	printf("*****************************************************************************\n");
	return 0;
}