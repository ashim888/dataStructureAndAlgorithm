/* Program to find sum of first n natural numbers using recursion*/
#include <stdio.h>
int main()
{
	int n;
	int sum_natural(int );
	printf("n = ");
	scanf("%d",&n);
	printf("Sum of first %d natural numbers = %d\n",n,sum_natural(n));
}
int sum_natural(int n) {
	if(n == 1){
		return 1;	
	}
	else{
		return n + sum_natural(n-1);	
	}

}