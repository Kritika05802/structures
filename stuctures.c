#include<stdio.h>
main()
{ struct employee
{ char name[20];
  int age;
  char phone_no[10];
  float salary;	
}emp[50];
int i,n,flag,temp;
char ch='y';
printf("Number of employees: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{ printf("\nName: ");
  scanf("%s",&emp[i].name);
  //gets(emp.name);
  printf("\nAge: ");
  scanf("%d",&emp[i].age);
  printf("\nPhone number: ");
  scanf("%s",&emp[i].phone_no);
  printf("\nSalary: ");
  scanf("%f",&emp[i].salary);
}
for(i=0;i<n;i++)
{
printf("Entered details: \n");
printf("Name: %s",emp[i].name);
printf("\nAge: %d",emp[i].age);
printf("\nPhone number: %s",emp[i].phone_no);
printf("\nSalary: %f",emp[i].salary);
}


return 0;
  
  
}






















