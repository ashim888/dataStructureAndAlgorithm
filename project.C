#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
void starting();
void heading();
void design();
void menu();
void create();
void result();
void entry_edit();
void class_result();
void search();
void modify();
void display();
void removestd();
void close();
int gd,gm;
int i,n,choice,found=0,recordno=0;
char roll[10],level[50];
char a,b,spider;
FILE *superman,*temp;
struct student
	{
	     char name[50];
	     char level[50];
	     char roll[20];
	     float it;
	     float c;
	     float calculus;
	     float prob;
	     float stat;
	     float total;
	     float per;
}std;
void main()
{
	starting();
	menu();
	getch();
}
void menu()
{
	clrscr();
	heading();
	design();
	setcolor(MAGENTA);
	settextstyle(7,0,3);
	outtextxy(230,170,"MAIN MENU");
	setcolor(YELLOW);
	settextstyle(7,0,2);
	outtextxy(150,230,"1. RESULT MENU");
	outtextxy(150,260,"2. ENTRY/EDIT MENU");
	outtextxy(150,290,"3. EXIT FROM PROGRAM");
	setcolor(WHITE);
	outtextxy(150,375,"Enter choice <1-3>. . .");
	gotoxy(50,25);
	scanf("%d",&i);
	switch(i)
	{
	      case 1 : result();
		    	   break;
	      case 2 : entry_edit();
			       break;
	      case 3 : close();
	      			getch();
	      			break;
	      default :
					printf("Please try again ... ");
					menu();

	}

}
void result()
{
	clrscr();
	heading();
	design();
	setcolor(YELLOW);
	settextstyle(7,0,3);
	outtextxy(230,170,"RESULT MENU");
	setcolor(BLUE);
	settextstyle(7,0,2);
	outtextxy(150,230,"1. CLASS RESULT");
	outtextxy(150,260,"2. SEARCH STUDENT RESULT");
	outtextxy(150,290,"3. DISPLAY TOTAL RESULT");
	outtextxy(150,320,"4. BACK TO MENU");
	setcolor(WHITE+BLINK);
	outtextxy(150,375,"Enter choice <1-4>. . .");
	gotoxy(50,25);
	scanf("%d",&i);
	switch(i)
	     {
	      case 1 : class_result();
			       break;
	      case 2 : search();
			       break;
	      case 3 : display();
			       break;
	      case 4 : menu();
				   break;

	      default :
					printf("Please try again ... ");
					getch();
					menu();
					break;

	      }
}

void entry_edit()
{
	clrscr();
	heading();
	design();
	setcolor(YELLOW);
	settextstyle(7,0,3);
	outtextxy(230,170,"ENTRY-EDIT MENU");
	setcolor(BLUE);
	settextstyle(7,0,2);
	outtextxy(150,230,"1. CREATE");
	outtextxy(150,260,"2. MODIFY");
	outtextxy(150,290,"3. DELETE");
	outtextxy(150,320,"4.BACK TO MENU");
	setcolor(WHITE);
	outtextxy(150,375,"Enter choice <1-4>. . .");
	gotoxy(50,25);
	scanf("%d",&choice);
	switch(choice)
	{
	      case 1 : create();
		     	   break;
	      case 2 : modify();
			   break;
	      case 3 : removestd();
				   break;
	      case 4 : menu();
			   break;

		  default :
					printf("Please try again ... ");
					getch();
					menu();
					break;

	}

}
void class_result()
{
	clrscr();
	heading();
	superman=fopen("student.txt","r+b");
	if(superman==NULL)
	{
		gotoxy(1,16);
		printf("File cannot be accessed");
	}
	else
	{
	fseek(superman,0,SEEK_SET);
	setcolor(MAGENTA);
	settextstyle(3,0,1);
	outtextxy(225,175," Record by  Class");
	setcolor(RED);
	settextstyle(4,0,4);
	outtextxy(0,178,"------------------------------");
	outtextxy(0,205,"------------------------------");
	gotoxy(1,14);
	printf("Name");
	gotoxy(10,14);
	printf("Level");
	gotoxy(18,14);
	printf("Roll No.");
	gotoxy(29,14);
	printf("IT");
	gotoxy(34,14);
	printf("C");
	gotoxy(38,14);
	printf("Calculus");
	gotoxy(49,14);
	printf("Probab");
	gotoxy(59,14);
	printf("Stat");
	gotoxy(66,14);
	printf("Total");
	gotoxy(73,14);
	printf("Perent");
	setcolor(WHITE);
	settextstyle(2,0,5);
	outtextxy(100,144," Enter class :");
	gotoxy(39,10);
	gets(level);
	fseek(superman,0,SEEK_SET);
	while (fread(&std,sizeof(std),1,superman)==1)
		{
			if(strcmp(std.level,level)==0)
				{
					found=1;
					break;
				}
		}
			if(found==1)
			{

	i=16;
	while(fread(&std,sizeof(std),1,superman)==1)
	{

				gotoxy(1,i);
				printf("%s",std.name);
				gotoxy(10,i);
				printf("%s",std.level);
				gotoxy(18,i);
				printf("%s",std.roll);
				gotoxy(29,i);
				printf("%f",std.it);
				gotoxy(34,i);
				printf("%f",std.c);
				gotoxy(38,i);
				printf("%f",std.calculus);
				gotoxy(49,i);
				printf("%f",std.prob);
				gotoxy(59,i);
				printf("%f",std.stat);
				gotoxy(66,i);
				printf("%f",std.total);
				gotoxy(73,i);
				printf("%f",std.per);
				i++;
	}
			}
			else
			{
				gotoxy(20,23);
				printf("class record not found !!! ");
			}
			gotoxy(20,25);
			printf("Search Another class record (y/n) ?");
			fflush(stdin);
			spider=getche();
			fflush(stdin);
	if(spider =='y')
	{
		class_result();
	}
	else
	{
	 menu();
	}
}
}
void create()
   {
	clrscr();
	heading();
	design();
	superman=fopen("Student.txt","r+b");
     if(superman==NULL)
	 {
	      superman=fopen("student.txt","w+b");
	      if(superman==NULL)
	      {
		 printf("FIle cannot be created !!! \n");
		 exit();
	      }
	 }
	fseek(superman,0,SEEK_END);
	setcolor(MAGENTA);
	settextstyle(4,0,4);
	outtextxy(190,150,"--------------");
	outtextxy(190,189,"--------------");
	settextstyle(8,0,3);
	setcolor(YELLOW);
	outtextxy(225,177,"ADD NEW RECORD");
	gotoxy(10,17);
	printf("Enter  the name : ");
	scanf("%s",std.name);
	gotoxy(10,18);
	printf("Enter  the level : ");
	scanf("%s",std.level);
	gotoxy(10,19);
	printf("Enter  the roll no. : ");
	scanf("%s",std.roll);
	gotoxy(10,20);
	printf("Enter  Marks in IT : ");
	scanf("%f",&std.it);
	gotoxy(10,21);
	printf("Enter  Marks in C : ");
	scanf("%f",&std.c);
	gotoxy(10,22);
	printf("Enter  Marks in Calculus : ");
	scanf("%f",&std.calculus);
	gotoxy(10,23);
	printf("Enter  Marks in probability and statistics : ");
	scanf("%f",&std.prob);
	gotoxy(10,24);
	printf("Enter  Marks in Statistics-I : ");
	scanf("%f",&std.stat);
	std.total = (std.it+std.c+std.calculus+std.prob+std.stat);
	std.per= std.total/5;
	fwrite(&std,sizeof(std),1,superman);
	fflush(stdin);
	settextstyle(2,0,6);
	setcolor(YELLOW);
	outtextxy(90,400,"Add more record (y/n) ? ");
	fflush(stdin);
	a=getche();

	if(a=='y')
	{

		create();
	}
	else
	{
		menu();
	}
	
}
void display()
{
	clrscr();
	heading();
	superman=fopen("student.txt","r+b");
	if(superman==NULL)
	{       gotoxy(1,15);
		printf("File cannot be accessed");
	}

	fseek(superman,0,SEEK_SET);
	setcolor(RED);
	settextstyle(4,0,4);
	outtextxy(0,161,"------------------------------");
	outtextxy(0,187,"------------------------------");
       setcolor(MAGENTA);
       settextstyle(3,0,2);
	outtextxy(225,144," Students Record");
	gotoxy(1,13);
	printf("Name");
	gotoxy(10,13);
	printf("Level");
	gotoxy(18,13);
	printf("Roll No.");
	gotoxy(29,13);
	printf("IT");
	gotoxy(34,13);
	printf("C");
	gotoxy(38,13);
	printf("Calculus");
	gotoxy(49,13);
	printf("Probab");
	gotoxy(59,13);
	printf("Stat");
	gotoxy(66,13);
	printf("Total");
	gotoxy(73,13);
	printf("Perent");
	i=15;
	while(fread(&std,sizeof(std),1,superman)==1)
	{
		gotoxy(1,i);
		printf("%s",std.name);
		gotoxy(8,i);
		printf("%s",std.level);
		gotoxy(19,i);
		printf("%s",std.roll);
		gotoxy(26,i);
		printf("%f",std.it);
		gotoxy(33,i);
		printf("%f",std.c);
		gotoxy(38,i);
		printf("%f",std.calculus);
		gotoxy(49,i);
		printf("%f",std.prob);
		gotoxy(59,i);
		printf("%f",std.stat);
		gotoxy(66,i);
		printf("%f",std.total);
		gotoxy(73,i);
		printf("%f",std.per);
		i++;

	}
	getch();
	menu();

}
void search()
{
	clrscr();
	heading();
	superman=fopen("student.txt","rb+");
	if(superman==NULL)
	{
		gotoxy(1,16);
		printf("File cannot be accessed");
	}
	else
	{
	fseek(superman,0,SEEK_SET);
	setcolor(MAGENTA);
	settextstyle(3,0,1);
	outtextxy(225,175," Students Record");
	setcolor(RED);
	settextstyle(4,0,4);
	outtextxy(0,178,"------------------------------");
	outtextxy(0,205,"------------------------------");
	gotoxy(1,14);
	printf("Name");
	gotoxy(10,14);
	printf("Level");
	gotoxy(18,14);
	printf("Roll No.");
	gotoxy(29,14);
	printf("IT");
	gotoxy(34,14);
	printf("C");
	gotoxy(38,14);
	printf("Calculus");
	gotoxy(49,14);
	printf("Probab");
	gotoxy(59,14);
	printf("Stat");
	gotoxy(66,14);
	printf("Total");
	gotoxy(73,14);
	printf("Perent");
	setcolor(WHITE);
	settextstyle(2,0,5);
	outtextxy(100,144," Enter Student's roll no. :");
	gotoxy(39,10);
	gets(roll);
	fseek(superman,0,SEEK_SET);
	while (fread(&std,sizeof(std),1,superman)==1)
		{
			if(strcmp(std.roll,roll)==0)
				{
					found=1;
					break;
				}
		}
			if(found==1)
			{

	i=16;
	while(fread(&std,sizeof(std),1,superman)==1)
	{
				gotoxy(1,i);
				printf("%s",std.name);
				gotoxy(10,i);
				printf("%s",std.level);
				gotoxy(18,i);
				printf("%s",std.roll);
				gotoxy(29,i);
				printf("%f",std.it);
				gotoxy(34,i);
				printf("%f",std.c);
				gotoxy(38,i);
				printf("%f",std.calculus);
				gotoxy(49,i);
				printf("%f",std.prob);
				gotoxy(59,i);
				printf("%f",std.stat);
				gotoxy(66,i);
				printf("%f",std.total);
				gotoxy(73,i);
				printf("%f",std.per);
				i++;
	}
			}
			else
			{
				gotoxy(20,23);
				printf("Student record not found !!! ");
			}
			gotoxy(20,25);
			printf("Search Another student record (y/n) ?");
			fflush(stdin);
			spider=getche();
			fflush(stdin);
	if(spider =='y')
	{
		search();
	}
	else
	{
		menu();
	}
}
}
void modify()
{
	clrscr();
	heading();
	design();
	superman=fopen("student.txt","rb+");
	if(superman==NULL)
	{
		gotoxy(10,15);
		printf("File cannot be accessed");
	}
	else
	   {
		fseek(superman,0,SEEK_SET);
		rewind(superman);
		settextstyle(8,0,3);
		setcolor(YELLOW);
		outtextxy(175,180,"MODIFY STUDENT RECORD");
		setcolor(MAGENTA);
	settextstyle(4,0,4);
	outtextxy(140,160,"------------------");
	outtextxy(140,190,"------------------");
		gotoxy(9,15);
		printf("Enter the student roll no. : ");
		gets(roll);
		while(fread(&std,sizeof(std),1,superman)==1)
		{
			if(strcmp(std.roll,roll)==0)
			{
				found=1;
				break;
			}
			recordno++;
		}
		if(found==1)
		{
			gotoxy(9,16);
			printf("Old record is ");
			gotoxy(9,18);
	printf("Name : ");
	printf("%s",std.name);
	gotoxy(9,19);
	printf("Level : ");
	printf("%s",std.level);
	gotoxy(9,20);
	printf("Roll No. : ");
	printf("%s",std.roll);
	gotoxy(9,21);
	printf("IT : ");
	printf("%f",std.it);
	gotoxy(9,22);
	printf("C : ");
	printf("%f",std.c);
	gotoxy(9,23);
	printf("Calculus : ");
	printf("%f",std.calculus);
	gotoxy(9,24);
	printf("Probab : ");
	printf("%f",std.prob);
	gotoxy(9,25);
	printf("Stat : ");
	printf("%f",std.stat);
	gotoxy(9,26);
	printf("Total : ");
	printf("%f",std.total);
	gotoxy(9,27);
	printf("Perent : ");
	printf("%f",std.per);
	gotoxy(45,16);
	printf("Enter new information");
	gotoxy(45,18);
	printf("Name : ");
	gets(std.name);
	gotoxy(45,19);
	printf("Level : ");
	gets(std.level);
	gotoxy(45,20);
	printf("Roll No. : ");
	gets(std.roll);
	gotoxy(45,21);
	printf("IT : ");
	scanf("%f",&std.it);
	gotoxy(45,22);
	printf("C : ");
	scanf("%f",&std.c);
	gotoxy(45,23);
	printf("Calculus : ");
	scanf("%f",&std.calculus);
	gotoxy(45,24);
	printf("Probab : ");
	scanf("%f",&std.prob);
	gotoxy(45,25);
	printf("Stat : ");
	scanf("%f",&std.stat);
	gotoxy(45,26);
	printf("Total : ");
	printf("%f",std.total);
	gotoxy(45,27);
	printf("Perent : ");
	printf("%f",std.per);
	fseek(superman,sizeof(std)*(recordno),SEEK_SET);
	if(fwrite(&std,sizeof(std),1,superman)==1)
		{
		setcolor(WHITE);
		settextstyle(4,0,3);
		outtextxy(170,410,"The record has been modified !!!!!");
		}


	else
		{
		printf("Error during modification !!!!!");
		}

	}
	else
	{
		settextstyle(7,0,2);
		setcolor(WHITE);
		outtextxy(170,410,"Student Record not found !!!");
	}
	settextstyle(7,0,2);
	setcolor(WHITE);
	outtextxy(170,440,"Modify another record (y/n) ? ");
	fflush(stdin);
	gotoxy(15,28);
	scanf("%c",&spider);
	fflush(stdin);
  if(spider=='y')
  {
	modify();
  }
  else
  {
  	menu();
  }
  }
}
void removestd()
{
	clrscr();
	heading();
	design();
	superman=fopen("student.txt","rb+");
	if(superman==NULL)
	{
		gotoxy(10,15);
		printf("File cannot be accessed");
	}
	else
	   {
		fseek(superman,0,SEEK_SET);
		rewind(superman);
		settextstyle(8,0,3);
		setcolor(YELLOW);
		outtextxy(175,180,"DELETE STUDENT RECORD");
		setcolor(MAGENTA);
	settextstyle(4,0,4);
	outtextxy(147,160,"------------------");
	outtextxy(147,189,"------------------");
		gotoxy(9,15);
		printf("Enter the student roll no. : ");
		gets(roll);
		while(fread(&std,sizeof(std),1,superman)==1)
		{
			if(strcmp(std.roll,roll)==0)
			{
				found=1;
				break;
			}
			recordno++;
		}
		if(found==1)
		  {
			gotoxy(9,16);
			printf("Old record is ");
			gotoxy(9,17);
	printf("Name : ");
	printf("%s",std.name);
	gotoxy(9,18);
	printf("Level : ");
	printf("%s",std.level);
	gotoxy(9,19);
	printf("Roll No. : ");
	printf("%s",std.roll);
	gotoxy(9,20);
	printf("IT : ");
	printf("%f",std.it);
	gotoxy(9,21);
	printf("C : ");
	printf("%f",std.c);
	gotoxy(9,22);
	printf("Calculus : ");
	printf("%f",std.calculus);
	gotoxy(9,23);
	printf("Probab : ");
	printf("%f",std.prob);
	gotoxy(9,24);
	printf("Stat : ");
	printf("%f",std.stat);
	gotoxy(9,25);
	printf("Total : ");
	printf("%f",std.total);
	gotoxy(9,26);
	printf("Perent : ");
	printf("%f",std.per);
	gotoxy(35,19);
			 printf("Are you sure to delete (y/n) ? ");
			 b=getche();
			 if( b=='y')
			 {

			  temp=fopen("tempstudent.txt","wb+");
			  rewind(superman);
			  while(fread(&std,sizeof(std),1,superman)==1)
				{
					if(strcmp(std.roll,roll)!=0)
						fwrite(&std,sizeof(std),1,temp);
					}
					fclose(superman);
					fclose(temp);
					remove("student.txt");
					rename("tempstudent.txt","student.txt");
					superman=fopen("student.txt","rb+");
					gotoxy(35,21);
					printf("SUCESSFULLY DELETED !!!!!!");
			  }
		  }
		  else
		  {
			gotoxy(27,25);

			printf("Student Record not found !!!");
		  }
		  setcolor(WHITE);
		  settextstyle(2,0,5);
		  outtextxy(225,450,"DELETE ANOTHER RECORD (y/n) ?");
		  fflush(stdin);
		  spider=getche();
		  fflush(stdin);
		  if(spider=='y')
		  {
			removestd();
		  }
		  else
		  {
			fclose(superman);
			menu();
		  }
	  }
}
void close()
{
	clrscr
	settextstyle(4,0,8);
	setcolor(GREEN);
	outtextxy(150,10,"FINALLY");
	settextstyle(7,0,2);
	setcolor(YELLOW);
	outtextxy(0,110,"Thank you very much for accessing our small project");
	outtextxy(120,140,"related to a useful small program. ");

	setcolor(RED);
	outtextxy(90,170,"MARKSHEET MANAGEMENT SYSTEM.");
	setcolor(YELLOW);
	outtextxy(0,200,"This task provided by MBM college will be very usefl for");
	outtextxy(3,230,"our upcoming career. This project would be incomplete if ");
	outtextxy(40,260,"there was no extreme help from our respected sir. ");
	setcolor(MAGENTA);
	outtextxy(170,290,"Mr.Ashim Lamichhane.");
	setcolor(YELLOW);
	outtextxy(0,320,"So we want to grant unexplainable thank to him. As well");
	outtextxy(0,350,"as we want to thank whole IT department of MBM college ");
	outtextxy(0,380,"for providing a wonderful platform and helping us in");
	outtextxy(0,410,"each and every steps towards the upliftment of our career. ");
	getch();
}
void starting ()
{
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setcolor(RED);
	settextstyle(4,0,7);
	outtextxy(200,10,"Welcome");
	outtextxy(250,70,"To");
	outtextxy(1,120,"Marksheet Management");
	setcolor(YELLOW);
	settextstyle(5,0,4);
	outtextxy(100,200,"Prepared by :- ");
	setcolor(GREEN);
	outtextxy(100,250,"1. Shishir Shrestha ");
	outtextxy(100,275,"2. Aashish Shrestha ");
	outtextxy(100,300,"3. Rajesh Kafle ");
	outtextxy(100,325,"4. Rojina Dhakal ");
	setcolor(BLUE);
	settextstyle(4,0,4);
	outtextxy(100,375,"Date: 2073/01/15 ");
	settextstyle(8,0,2);
	setcolor(WHITE);
	outtextxy(100,425,"Press any key to continue... ");
	getch();
}
void heading ()
{   
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setcolor(GREEN);
	settextstyle(4,0,3);
	outtextxy(65,25,"MADAN BHANDARI MEMORIAL COLLEGE");
	settextstyle(1,0,1);
	outtextxy(200,50,"Binayaknagar,Kathmandu");
	settextstyle(1,0,2);
	outtextxy(260,70,"2011 A.D");
	setcolor(BLUE);
	settextstyle(4,0,4);
	outtextxy(105,90,"Marksheet Management System");
}
void design()
{   
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	clrscr();
	heading();
	setcolor(RED);
	settextstyle(4,1,4);
	outtextxy(25,150,"***********************");
	settextstyle(4,0,4);
	outtextxy(60,130,"****************************************");
	settextstyle(4,1,4);
	outtextxy(560,150,"***********************");
	settextstyle(4,0,4);
	outtextxy(57,417,"****************************************");

}
