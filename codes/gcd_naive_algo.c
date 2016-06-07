#include <stdio.h>

int naiveGCD(int n1,int n2){
    int gcd,i;
    for(i=1; i <= n1+n2; ++i){
        printf("i=%d\n",i );
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}


int efficientGCD(int n1,int n2){
    // BLOCK TO BE FILLED
    /*
    If b=0:
        return a
    a’ = the remainder when a is divided by b
    return efficientGCD(b,a’)
    */
}

int main()
{
    int n1, n2,gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    // gcd=naiveGCD(n1,n2);
    gcd=efficientGCD(n1,ne);
    printf("G.C.D of %d and %d is :%d\n", n1, n2, gcd);
    return 0;
}