#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, sum=0, *p;
    int n;
    printf("Enter the number of int spaces that you want to dynamically allocate:\n");
    scanf("%d",&n);
    p= (int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("No space was dynamically allocated");
    }
    for(int i=0;i<n;++i){
        printf("p[%d]=\n",i);
        scanf("%d",p+i);
        sum+=*(p+i);
    }
    printf("\nNow the sum of all the items of the array is %d",sum);
    free(p);
    return 0;
}