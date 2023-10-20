#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	
     
	 int a[4] = { 4,5,3,1}; //0 1 2 3
	int i;
	int maxest = a[0]; //4
	for ( i = 1; i < 4; i++)
		if (a[i] > maxest)
	           maxest = a[i];

 printf("%d", maxest);

}