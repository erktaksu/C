#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//unsigned için printf("%u",.....); kullanýlýr negatif deðer aldýrmaz unsigned.
// printf("%x",.....) %x hexa desimal olarak bir çýkýþ verir
/*
scanf de eger %d formatýnda 123ab gibi deðer girerseniz ab yi almaz ama bufferda tutar
eger bir daha scanf le bir deðer almaya çalýþýrsanýz aldýrmaz ve çöp deger atar
ayný zamanda %d formatýnda ab123 yaparsanýz bu seferde çýkýþta yine çöp deðer atar

 int x=scanf  baþarýlý geri dönüþ deðerini x e atar.
*/
/*
FORMATSIZ GÝRÝÞ-ÇIKIÞ

int getchar(void); karakterin kod numarasýný alýr.  enter ýda alýr
int putchar(int);  karakterin kod numarasýný verir.


*/
// %c char için karakter çýktýsý almak için
int main() {
	printf("ilk dosya\n");
    int a = 5;          //tam sayý
	double b = 10.3;    //ondalýk
	float c= 5.33;      //ondalýk
	int value1; 
	int value2;
	printf("*****************************************************************************\n");
	printf("giris yapin=");
	int ch = getchar();
	printf("%d\n", ch);
	putchar(66);  //int türünü asci deki karþýlýðýný yazdýrýr 66=B
	printf("\n*****************************************************************************\n");
	printf("iki int turunden deger giriniz=");
    int x=scanf("%d%d", &value1,&value2); //formatli bir giriþ kullanýcýdan deger almak
	printf("value1=%d value2=%d\n", value1,value2);
	printf("scanfin basarili geri donus degeri=%d\n", x);
	printf("*****************************************************************************\n");
	printf("a=%d\n", a); //int deðer için %d çýkýþ formatý
	printf("b=%.3lf\n", b); //double deðer için %lf çýkýþ formatý
	printf("c=%.3f\n", c); //float deðer için %f çýkýþ formatý float double dan daha az yer kaplar
   
	printf("*****************************************************************************\n");
	printf("int=%zu\n",sizeof(int)); // %zu ve sizeof kullanarak deðiþkenlerin bellekte kapladýðý boyutu görüyoruz.
	printf("short=%zu\n", sizeof(short));
	printf("char=%zu\n",sizeof(char));
	printf("long=%zu\n", sizeof(long));
	printf("long long=%zu\n",sizeof(long long));
	printf("float=%zu\n", sizeof(float));
	printf("double=%zu\n", sizeof(double));
	printf("*****************************************************************************\n");
	return 0;
}