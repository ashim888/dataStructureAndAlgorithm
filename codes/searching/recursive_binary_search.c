// binsearchrec.c: simple implementation
#include <stdio.h>

int binsearchrec(int len, int a[], int x) { 
   return binsearchrec0(len, a, x, 0, len - 1);
}

int binsearchrec0(int len, int a[], int x, int low, int high) {
   int mid;
   if (low > high) 
    return -1; 
   mid = (low + high)/2;
   if (a[mid] == x) 
    return mid;
   else if (a[mid] < x)
      return binsearchrec0(len, a, x, mid+1,high);
   else // last possibility: a[mid] > x
      return binsearchrec0(len, a, x, low, mid-1);
}

int main() {

   int a[] =
    { 34,57,66,86,89,91,92,100};  // 20-28
   int i;
   int len_array=sizeof(a)/4;
   // for (i = 0; i < 29; i++)
   //    printf("%i ", binsearchrec(LEN, a, a[i]));
   // printf("\n");
   printf("%i ", binsearchrec(len_array, a, 8));
   printf("%i ", binsearchrec(len_array, a, 2));
   printf("%i ", binsearchrec(len_array, a, 89));
   // printf("%d\n",sizeof(a)/4 );
   // printf("%i ", binsearchrec(LEN, a, 17));
   // printf("%i ", binsearchrec(LEN, a, 42));
   // printf("%i ", binsearchrec(LEN, a, 99));
   printf("\n");
}