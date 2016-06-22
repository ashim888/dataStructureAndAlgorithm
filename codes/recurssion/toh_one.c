#include<stdio.h>

void TOH(int num, char x, char y, char z);

int main() {
   int num;
   printf("\nEnter number of plates:");
   scanf("%d", &num);

   TOH(num - 1, 'A', 'B', 'C');
   return (0);
}

void TOH(int num, char x, char y, char z) {
   if (num > 0) {
      TOH(num - 1, x, z, y);
      printf("\n%c -> %c", x, y);
      TOH(num - 1, z, y, x);
   }
}