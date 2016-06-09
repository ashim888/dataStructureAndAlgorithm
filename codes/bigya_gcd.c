#include <stdio.h>

int main() {
	int i,x,y,a,b,r;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	a=x>y?x:y;
	b=x+y-a;
	for(i=1;i<=b-1;i++) {
			while(b!=0) {
				r=a%b;
				a=b;
				b=r;
			}
		}
	printf("%d\n",a );
	return 0;
}