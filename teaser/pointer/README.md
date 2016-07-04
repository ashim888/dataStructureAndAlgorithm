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
/* WAP to increase the value stored in a variable by passing a pointer to function and 
*  print the original and increased value 
*/

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

```
#include <stdio.h>
#include <stdlib.h>
// #define m 7
float * returnArray(float *arr, int size) {
    float *new_arr = malloc(sizeof(float) * size);
    for(int i = size-1,j=0;i>=0; i--,j++) {
        new_arr[j] = arr[i];
    }
    return new_arr;
}

int main() {
    int size;
	printf("Enter Size of an array: \t");
    scanf("%d",&size);

    float arr[size];
    for(int i=0;i<size;i++){
        scanf("%f",&arr[i]);
    }
    printf("THE REVERSE ORDER IS:\n");
    printf("index\t\tvalue\t\taddress\n");

    float *new_arr = returnArray(arr, size);

	for(int i=0;i<size;i++){
    
        printf("%d\t\t%.2f\t\t%p\n",i,*(new_arr+i),new_arr+i);
    }
    
    free(new_arr);

}
```

```
#include <stdio.h>

int main(void){
	int p[2][3]={{1,2,3},{4,5,6}};
	printf("\np[2][3]={{1,2,3},{4,5,6}}\n");
	printf("\n\np=%p \tp+1=%p\n",p,p+1);
	printf("\n*p=%p\t*(p+1)=%p\n",*p,*(p+1));
	printf("\n*(p+0)+1=%p\t*(p+1)+1=%p\n",*(p+0)+1,*(p+1)+1);
	printf("\n*(*(p+0)+1)=%d\t\t*(*(p+1)+1)=%d\n\n",*(*(p+0)+1),*(*(p+1)+1));

}
```