
#include<stdio.h>
#include<conio.h>
void day_1(void);
void day_2(void);
void day_3(void);
void day_4(void);
void day_5(void);
int main(void)
{
int n;
printf("\t\tClass routine of the ICT 1st batch\n\n");
printf("\t\tyear-1 ********************* Term-2\n\n");
printf("\t\t\tchoice 1 for sunday\n");
printf("\t\t\tchoice 2 for monday\n");
printf("\t\t\tchoice 3 for tuesday\n");
printf("\t\t\tchoice 4 for wednesday\n");
printf("\t\t\tchoice 5 for thursday\n\t\t\t\t");
scanf(" %d",&n);

switch(n)
{
case 1:
day_1();

break;
case 2:
day_2();
break;
case 3:
day_3();
break;
case 4:
day_4();
break;
case 5:
day_5();
break;
default:
printf("University off\n");
}
getch();
}
// AR : Abidur Rahman,ZUS : Zayed-As-Salehin,SR : Saifur Rahman,MARK : Ashiqur Rahman,RQH : Rakibul khan,TI :Tania Islam
void day_1(void)
{
 int i;
 char* subject[3]={"ICT 1201","ICT 1207","ICT 1204:GR-B"};

char* teachers_name[3]={"SR","RQH","AR"};
char* Time[3]={"9.00-9.50","12.00-12.50","2.00-4.50"};
printf("\t*************************SUNDAY****************************\n");
printf("\t\tTime\t\tSubject\t\tTeachers_name\n\n");
printf("\t**********************************************************\n");
for(i=0;i<3;i++)
{
printf("\t%13s\t\t%s\t\t%s\n\n",Time[i],subject[i],teachers_name[i]);
}
}
void day_2(void)
{
int i;
char* Time[3]={"9.00-9.50","12.00-12.50","2.00-4.50"};
char* subject[3]={"ICT 1205 ","ICT 1203","ICT 1206:GR-A"};
char* teachers_name[3]={"ZUS","MARK","ZUS & SR"};
printf("\t************************MONDAY*******************************\n\n");
printf("\t\tTime\t\tSubject\t\t\tTeachers_name\n\n");
printf("\t*************************************************************\n");

for(i=0;i<3;i++)
{
printf("\t%13s\t%22s\t\t%s\n\n",Time[i],subject[i],teachers_name[i]);
}

}
void day_3(void)
{
int i;
char*  Time[3]={"10.00-10.50","12.00-12.50","2.00-2.50"};
char* subject[3]={"ICT 1207" ,"ICT 1205","ICT 1203"};
char* teachers_name[3]={"RQH","ZUS","AR"};
printf("\t***********************TUESSDAY***************************\n\n");
printf("\t\tTime\t\tSubject\t\tTeachers_name\n\n");
printf("\t**********************************************************\n");
for(i=0;i<3;i++)
{
printf("\t%12s\t%15s\t\t%s\n\n",Time[i],subject[i],teachers_name[i]);
}
}
void day_4(void)
{
int i;
char* Time[5]={"10.00-10.50","11.00-11.50","12.00-12.50","2.00-2.50","3.00-3.50"};
char* subject[5]={"ICT 1209","ICT 1203","ICT 1201","ICT-1204:GR-A","ICT-1206:GR-B"};
char* teachers_name[5]={"TI","MARK","SR","AR","ZUS & SR"};
printf("\t**********************WEDNESDAY****************************\n\n");
printf("\t\tTime\t\tSubject\t\t\tTeachers_name\n\n");
printf("\t*************************************************************\n");
for(i=0;i<5;i++)
{
printf("\t%14s\t\t%10s\t\t%5s\n\n",Time[i],subject[i],teachers_name[i]);
}

}
void day_5(void)
{
int i;
char* Time[4]={"9.00-9.50","11.00-11.50","12.00-12.50","2.00-2.50"};
char* subject[4]={"ICT 1205","ICT 1209","ICT 1207","ICT 1201"};
char* teachers_name[4]={"ZUS","TI","RQH","SR"};
printf("\t*************************THURSDAY*****************************\n\n");
printf("\t\tTime\t\tSubject\t\t\tTeachers_name\n\n");
printf("\t***************************************************************\n");
for(i=0;i<4;i++)
{
printf("\t%14s\t\t%10s\t\t%5s\n\n",Time[i],subject[i],teachers_name[i]);
}

}
