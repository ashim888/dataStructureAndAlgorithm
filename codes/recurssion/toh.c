/*
 * C program for Tower of Hanoi using Recursion
 */
#include <stdio.h>
void towers(int, char, char, char);
 
int main()
{
    int num;
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    printf("\nThis is num %d\n", num);
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("  Move disk one from peg %c to peg %c\n", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("Move disk %d from peg %c to peg %c\n", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}
