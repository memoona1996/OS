#include <stdio.h>
#include <stdlib.h>

int pow(int n, int p){

	for (int i = 1; i < p; i++)
		n = n + n;
	return n;
}


int main()
{

	int x = pow(2, 6);
	printf("%i",x);
	system("pause");


	return 0;
}
