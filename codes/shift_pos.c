#include <stdio.h>
int main()
{
int a[100], pos, nel, i,n;

printf("Enter no of elements to be inserted: "); 
scanf("%d", &n);
printf("Enter %d elements\n", n); 
for(i=0;i<n;i++){
	scanf("%d", &a[i]); 
}

printf("Enter position at which you want to insert new element: "); 
scanf("%d", &pos);
printf("Enter new element: ");
scanf("%d", &nel);

for(i=n-1; i>=pos; i--) {
	a[i+1] = a[i]; 
}
	a[pos]=nel;
	n++;

// printf("New array is:\n"); 
for(i=0; i<n; i++){
	printf("%d\t", a[i]); 
}
printf("\n");
return 0;
}