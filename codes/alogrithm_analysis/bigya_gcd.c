#include <stdio.h>

int main() {
	int i,x,y,a,b,r;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	a=x>y?x:y; //greater
	b=x+y-a; // less
	printf("a=%d\n",a );
	printf("b=%d\n",b );
	for(i=1;i<=a;i++) {
			while(b!=0) {
				r=a%b;
				a=b;
				b=r;
			}
		}
	printf("%d\n",a );
	return 0;
}