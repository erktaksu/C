#include<stdio.h>
#include<string.h>
#include"mylibrary.h"



void printBits(unsigned int num) {

	char buf[32];
	itoa(num, buf, 2);
	printf("%s\n",buf);
}