#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {

	char operator;
	double n1, n2;
	double value;
	printf("islem seciniz=+ - / * =");
	scanf("%c", &operator);   // enter karakterinide al�r eger ki basta kullanmaz isek.
	printf("iki sayi giriniz=");
	scanf("%lf%lf", &n1, &n2);
	

	switch (operator)
	{
	case '+':
		value = n1 + n2;
		break;
	case '-':
		value = n1 - n2;
		break;
	case '/':
		if (n2 != 0) {
			value = n1 / n2;
		}
			
		else {
			printf("hata!");
			return 0;  //tekrar dan d�nd�rme yapt�rmad� ve koddan ��k���n� yapt�
		}
			
		break;
	case '*':
		value = n1 * n2;
		break;
	default:
		break;
	}

	printf("%lf", value);
	return 0;
}