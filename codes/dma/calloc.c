#include<stdio.h>
#include<stdlib.h>

int main(){
    int number;
    float *p;
    printf("Enter the number of blocks that you want to allocate:");
    scanf("%d",&number);

    p=(float*)calloc(number,sizeof(float));
    //here it allocates with respect to the number

    if(p==NULL){
        printf("No space has been allocated");
    }
    for(int i=0;i<number;++i){
        printf("p[%d]=",i);
        scanf("%f",p+i);
        //didnt use & because p+i it is directly referencing to the memory
    }
    //displaying all the elements in the dynmaically allocated array
    for(int i=0;i<number;++i){
        printf("%f\t",*(p+i));
    }
    free(p);
    return 0;
}