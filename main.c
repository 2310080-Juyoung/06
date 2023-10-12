#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo (int a, int b)
	{
		int c = a+b;
		return c;
	}

int square(int n){
	return n*n;
}

int get_max(int x, int y){
	if (x>y)
		return x;
		
	return y;
}

int main(int argc, char *argv[])
{
	int a,b;
	a=7;
	b=3;
	
	printf("sumTwo result : %i\n", sumTwo(a,b));
	
	int n;
	n=3;
	
	printf("square result : %i\n", square(n));
	
	int x,y;
	x=7;
	y=3;
	
	printf("get_max result : %i\n", get_max(x,y));
	
	return 0;
}
