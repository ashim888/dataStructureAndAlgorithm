```
#include <stdio.h>

int main() {
int n = 10;

/* Fill In your Code here So that we can print one conditional statement at a time*/


if (pointer_to_n != &n) {
	printf(“First Print This”);
}
if (*pointer_to_n != 11){
	printf(“And Print This”);	
}

return 0;
}

```
```
/* WAP to increase the value stored in a variable by passing a pointer to function and print the original and increased value*/

#include <stdio.h>

void addGraceMarks(int *m){
	
//FILL YOUR CODE

}

int main(void){
	int marks;
	printf("Enter Actual Marks\n");
	scanf("%d",&marks);
	//FILL YOUR CODE

	printf("\nThe grace marks is : %d\n",marks);

}

```
```

/* WAP to calculate average marks of 10 students in a subject using pointer*/

int main(){
	int n,i;
	float *p,sum=0,avg;
	printf("How many students are there?\t" );
	scanf("%d",&n);
	printf("Enter Marks of each Student\n");
	
	p=(float *)malloc(n*sizeof(float));

	for (int i = 0; i < n; i++)
	{
	//FILL YOUR CODE HERE


	}
	avg=sum/n;
	
	printf("\nThe average marks of");
	for (int i = 0; i < n; i++)
	{
	// FILL YOUR CODE HERE 

	}
	printf(" is: %.2f\n", avg);
	free(p);
}

```