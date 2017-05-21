#include <stdio.h>

int recur(int n){
	if(n>0){
		// printf("%d\n", n);
		return n+recur(n-1);
	
	}else{
		return 0;
	}
}

int hi(int n){
	if (n<=0)
	{
		printf("BYE\n");
		return 0;
	}
	else{
		printf("HI!!!\n");
		return hi(n-1);	
	}
}

int main(){
	//Number example
	int s=recur(5);
	printf("%d\n", s);
	// hi(5);
	return 0;
}