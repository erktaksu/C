#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
/*
isupper() b�y�k karakter kontrol�
islower() k���k karakter
isalnum() alfanumeric karater + * -
isxdigit() hexedecimal 
isdigit() digit character say� ve harf
*
* int toupper(int c) b�y�k harfe 
* int tolower(int c) k���k harfe
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