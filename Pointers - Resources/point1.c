#include <stdio.h>

int main() {

	int i1, i2;
	int *p1, *p2;

	i1 = 5;
	p1 = &i1;

	i2 = (*p1 + 15) / 10;
	p2 = p1;

	printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n",
		   i1, i2 , *p1, *p2);
	printf("Hello Pointers!\n");
	return 0;
}