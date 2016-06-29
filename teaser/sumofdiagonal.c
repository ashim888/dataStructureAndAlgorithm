// Print the absolute difference between the two sums of the matrix's diagonals as a single integer.

#include <stdio.h>

int main(){
    int n;
    int firstsum=0,secondsum=0;
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j=0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    }
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j<n; a_j++){
           
          //YOUR CODE HERE 
          
       }
    }
    printf("\n%d", abs(firstsum-secondsum)); 
    return 0;
}
