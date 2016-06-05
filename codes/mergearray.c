#include<stdio.h> 
int main()
{
int a[6], b[4], c[10], i, j;

printf("Enter elements of first array\n"); 
for(i=0;i<6;i++)
	scanf("%d", &a[i]);

printf("Enter elements of second array\n"); 
for(i=0;i<4;i++){
	scanf("%d", &a[i]); 
}
for(i=0; i<6; i++) {
	c[i]=a[i]; 
}
j=i; 
for(i=0; i<4; i++) {
	c[j]=a[i];
	j++; 
}
printf("The resulting array is:\n"); for(i=0; i<10; i++)
{
printf("%d\t", c[i]); 
}
return 0;
}