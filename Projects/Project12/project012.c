#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
/*
isupper() büyük karakter kontrolü
islower() küçük karakter
isalnum() alfanumeric karater + * -
isxdigit() hexedecimal 
isdigit() digit character sayý ve harf
*
* int toupper(int c) büyük harfe 
* int tolower(int c) küçük harfe
*
*/

int main() {
	int c;
	printf("enter a character =");
	c = getchar();
	if (isupper(c))
		printf("evet %c isupper dir\n",c);
	else
		printf("hayir %c degildir\n ",c);
	
	printf("%c", toupper(c));



}