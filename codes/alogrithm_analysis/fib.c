#include <stdio.h>

unsigned int naiveFib(int n)
{	
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return ( naiveFib(n-1) + naiveFib(n-2) );	
	}
}

unsigned int efficientFib(int n){
	/*Write your code here*/
	int arr[n];
    arr[0]=0;
    arr[1]=1;
    for (int i = 2; i <=n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}

int main()
{
	int n,i;
	printf("Enter the limit of series: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		// printf(" %d ",naiveFib(i));
		printf(" %u ",efficientFib(i));
	}
	printf("\n");

}