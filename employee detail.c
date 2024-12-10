#include<stdio.h>
int main()
{
	struct employee{
		char name[50];
		int id;
		int year;
		float salary;
	}emp[100];
   	int n,i,j;
	 printf("enter employee number\n");
	 scanf("%d",&n);
	 for( i=0;i<n;i++){
	 
	 printf("enter employee id\n");
	 scanf("%d",&emp[i].id);
   	 printf("enter employee name\n");
	 scanf("%s",&emp[i].name);
	 printf("enter employee id\n");
	 scanf("%d",&emp[i].id);
	 printf("enter employee year\n");
	 scanf("%s",&emp[i].year);
	 printf("enter employee salary\n");
	 scanf("%f",&emp[i].salary);
    }
     for(j=0;j<2;j++)
     {
	 printf("student name is:%s  id is:%d  dep is:%s  salary is %.2f \n",emp[i].name,emp[i].id,emp[i].year,emp[i].salary);

	}
}
	

