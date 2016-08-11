#include <stdio.h>

int linearSearch(int list[],int n,int no){
	int i;
	for (i = 0; i < n; ++i)
	{
		if (list[i]==no)
		{
			/* code */
			return i;
		}
	}
	return -1;
}
int main(){
	int list[10];
	int i,n,no,val;
	printf("Enter number of arrays\n");
	scanf("%d",&n);
	printf("Enter Numbers in an array:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&list[i]);
	}
	printf("Enter number to be Searched:\t");
	scanf("%d",&no);
	val=linearSearch(list,n,no);
	if (val!=-1)
	{
		/* 23code */
		printf("Item found at position: %d \n",val);
	}
	else{
		printf("Not Found\n");
	}
	return 0;

}