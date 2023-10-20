#include"mylibrary.h"



int maxtwo(int n1, int n2){
	if (n1 > n2)
		return n1; //else yazmaya bile gerek blok koymadık
  return n2;
}

int fac(int num) { //faktoriyel
	int deger = 1;

	for (int x = 1; x <= num; x++) {
		deger *= x;
	}
	return deger;
}
