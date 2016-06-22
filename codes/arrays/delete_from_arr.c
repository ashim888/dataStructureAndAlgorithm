//Deletion of any element
#include <stdio.h>

int main(void)
{
	int n,i,j,del;
	printf("\nHow many number do you want to add in array??\n");
	scanf("%d",&n);
	int array[n];
	printf("\nEnter %d number of array element",n);
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("\nenter the number you want to delete? ");
	scanf("%d",&del);
	
	for (i = 0; i < n; i++)
	{
		/* code */
		if (array[i]==del)
		{
			/* code */
			array[i]=0;
		}
	}
	
	printf("the new array is \n");
	for(i=0;i<n;i++){
		if (array[i]!=0)
		{
			printf("%d",array[i]);
		}
		
	}
	printf("\n");
}