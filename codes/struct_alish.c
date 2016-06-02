#include <stdio.h>
#include<stdlib.h>
struct name {
   char s_name[30];
   char add[30];
   int age;
   float salary;
};
int main(){
   struct name *ptr;
   int i,n,tot,avg;
   printf("Enter the number : ");
   scanf("%d",&n);

   ptr=(struct name*)malloc(n*sizeof(struct name));
   for(i=0;i<n;++i){
       printf("Enter name,address,age and salary respectively :\n");
       scanf("%s %s %d %f",(ptr+i)->s_name, (ptr+i)->add, &(ptr+i)->age, &(ptr+i)->salary);
       tot=tot+(ptr+i)->salary;
   }
   printf("Displaying Infromation:\n");
   for(i=0;i<n;++i){
   
       printf("%s\t%s\t%d\t%f\n",(ptr+i)->s_name,(ptr+i)->add,(ptr+i)->age,(ptr+i)->salary);
   				}
printf("The average salary is: %f",tot/n;);

// printf("%d",avg);
return 0;
}
