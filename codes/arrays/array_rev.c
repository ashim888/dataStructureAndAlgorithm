#include <stdio.h>


int main(){
	int n,arr[10];
	printf("Enter number of items in an array");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Reversed Array is\n");
	for(int loop = n-1; loop >= 0; loop--)
         printf("%d ", arr[loop]);
	return 0;
}
