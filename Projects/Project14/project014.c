#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main() {

	int a[4][3] = { {1,2,3 },  //0 1 2 3 her bir block ve 0 1 2 her bir elemana eri�im
		          {4,5,6},
		          {7,8,9},
		          {10,11,12} };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	
}