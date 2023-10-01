//Struct-

#include<Stdio.h>
#include <string.h>
#include <conio.h>
void del();
void modify();
void create();
void insert();
void display();
int count=0;
struct student
{
char name[40];
int prn;
float per;
};
struct student stu[15];
int main()
{
int ch, choice,p;
do
{

printf("\n Student Structure Program");
printf("\n-------------------------");
printf("\n Create : 1 ");
printf("\n Insert : 2 ");
 printf("\n Modify : 3 ");
 printf("\n Delete : 4 ");
 printf("\n Display : 5 ");
 printf("\n Exit : 6 |");
 printf("\n-------------------------");

printf("\n Enter Your Choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
printf("\nPress Enter To Continue!");
getch();
break;
case 2:
 insert();
 printf("\nPress Enter To Continue!");
getch();
break;
case 3:
 modify();
 printf("\nPress Enter To Continue!");
getch();
break;
case 4:
 del();
 printf("\nPress Enter To Continue!");
getch();
break;
case 5:
 display();
 printf("\nPress Enter To Continue!");
getch();
break;
default:
 printf("\nInvalid choice :(\n");
}
}while(choice!=6);
return 0;
}
void create()
{
int i, n;
printf("\nEnter the number of records you want: ");
scanf("%d",&n);
for (i=0; i<n; i++)
{
printf("\nEnter data for Record %d", i + 1);
 printf("\nEnter rollno : ");
 scanf("%d", &stu[i].prn);
 printf("Enter name : ");
 scanf("%s", stu[i].name);
printf("Enter marks : ");
 scanf("%f", &stu[i].per);
}
count=n;
//display();
}
void display()
{

int i;
printf("\n-----------------------");
printf("\nName\tPRN\tPER\n");
for (i=0; i<count; i++)
{
printf("%s\t%d\t%f\n", stu[i].name, stu[i].prn, stu[i].per);
}
printf("-----------------------\n");
}
void insert()
{
int i,n;
printf("Enter the number of records you want to insert: ");
scanf("%d",&n);
for (i=0; i<n; i++)
{
printf("\nEnter data for Record %d", i + 1);
fflush(stdin);
 printf("\nEnter PRN : ");
 scanf("%d", &stu[count].prn);
printf("Enter name : ");
 scanf("%s", stu[count].name);
 printf("Enter Percentage: ");
 scanf("%f", &stu[count].per);
count++;
}
display();
}
void del()
{
int i, flag=0;
int prnstudent;
printf("\nEnter the prn of student you want to delete: ");

scanf("%d", &prnstudent);
for (i=0; i<count; i++)
{
if (stu[i].prn==prnstudent)
{
while (i<count)
{
stu[i]=stu[i+1];
i++;
flag=1;
}
}
}
if (flag==0){
 printf("\nStudent not found. :(\n");
}
count--;
//display();
}
void modify()
{
int i,p, prnstudent, perstudent, flag=0;
char namestudent[30];
printf("\nEnter prn of the student whose record you want to modify: ");

scanf("%d", &prnstudent);
printf("\nName\tPRN\tPER\n");
printf("%s\t%d\t%f\n", stu[i].name, stu[i].prn, stu[i].per);
 
printf("\nEnter name: ");
scanf("%s", namestudent);
printf("\nEnter percentage: ");
scanf("%f", &perstudent);
for (i=0; i<count; i++)
{
if (stu[i].prn==prnstudent)
{
stu[i].prn= prnstudent;
strcpy(stu[i].name,namestudent);
stu[i].per = perstudent;
flag=1;
}
}
if (flag==0){
 printf("\nStudent not found. :(\n");
}
//display();
}  
 


