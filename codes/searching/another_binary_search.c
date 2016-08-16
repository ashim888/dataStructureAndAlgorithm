// binarysearch.c: simple implementation
#include <stdio.h>
#define LEN 29
int binarysearch(int len, int a[], int x) {
   int low = 0;
   int high = len - 1;
   while (low <= high) {
      int mid = (low + high) / 2;
      if (a[mid] == x) 
        return mid;
      else if (a[mid] < x) 
        low = mid + 1;
      else 
        high = mid - 1;
   }
   return -1;
}

int display_result(int val,int num){
  if (val==-1)
  {
    printf("%d Not found\n",num);
  }
  else{
    printf("%d Found on Index: %d\n", num,val);
  }
}

int main() {

   int a[] =
    { 2, 8,12,14,16,19,24,28,31,33,// 0-9
     39,40,45,49,51,53,54,56,57,60,// 10-19
     63,69,77,82,88,89,94,96,97};  // 20-28
   int i,val;
   // for (i = 0; i < 29; i++)
   //    printf("%i ", binarysearch(LEN, a, a[i]));
   printf("\n");
   // printf("Found On Index: %i ", binarysearch(LEN, a, 57));
   // val=binarysearch(LEN, a, 57);
   display_result(binarysearch(LEN, a, 57),57);
   // val=binarysearch(LEN, a, 1);
   display_result(binarysearch(LEN, a, 1),1);
   // printf("%i ", binarysearch(LEN, a, 17));
   // printf("%i ", binarysearch(LEN, a, 42));
   // printf("%i ", binarysearch(LEN, a, 99));
   printf("\n");
}