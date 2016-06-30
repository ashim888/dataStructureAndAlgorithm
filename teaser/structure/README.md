```
#include <stdio.h>

struct employee
	{
		char name[20];
		int id;
		float salary;
	};

void display(struct employee e){
	// DISPLAY EMPLOYEE NAME, ID, SALARY
}

void increaseSalary(struct employee *ee){
	//INCREASE SALARY BY 200000

}

void main(){
	
	struct employee emp;
	
	//GET EMPLOYEE NAME

	//GET EMPLOYEE ID
	
	//GET EMPLOYEE SALARY
	
	//INCREASE SALARY FUNCTION CALL

	display(emp);
}
```

```
#include <stdio.h>

struct Employee
{
   char ename[20];
   int id;
   float salary;
   //GET ONE STRUCT OVER HERE CREATING A NESTED STRUCTURE as date_of_birth

}emp = {"Pritesh",1000,1000.50,{22,6,1990}};

int main()
{
  	printf("\n\n\n");    
	printf("\nEmployee Name   : %s",emp.ename);  

	//PRINT EMPLOYEE ID, SALARY, DATE OF BIRTH 


	return 0;
}

```
```
#include <stdio.h>
#include <stdlib.h>
struct name {
   int a;
   char c[30];
};
int main(){
   struct name *ptr;
   int i,n;
   printf("Enter n: ");
   scanf("%d",&n);

/* Allocate the memory for n structures with pointer ptr pointing to the base address. */
   ptr= ;
   for(i=0;i<n;++i){
       printf("Enter Name and Roll Number respectively %d: ",i+1);
       //SCAN NAME AND ROLL NUMBER
   }
   printf("\n\nDisplaying Infromation:\nName\tRoll Number\n\n");
   for(i=0;i<n;++i)
       //DISPLAY NAME AND ROLL NUMBER
   return 0;
}
```