#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n){
	int i;
	int res = 1;
	for(i=1;i<=n;i++)
	{
		res=res*i;
	}
	return res;
}


int combination(int n,int r){
	int div1, div2, c;
	
	div1 = factorial(n);
	div2 = factorial(n-r)*factorial(r);
	
	c = div1/div2;
	return c;

}

int main(int argc, char *argv[]){
	
	int n,r;
	int div1,div2; // div1은 분자, div2는 분모  
	int result;
	
	printf("input n : ");
	scanf("%d",&n);

	printf("input r : ");
	scanf("%d",&r);
	
	printf("C(%i,%i) = %i", n,r,combination(n,r));
	
	return 0;
}


