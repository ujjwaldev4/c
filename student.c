#include<stdio.h>
int main()
{
	struct student{
		char name[50];
		int age;
	int marks;
  }std[100];
    int n;
	 printf("enter student number\n");
	 scanf("%d",&n);
	 for(int i=0;i<n;i++){
	 
	 printf("enter student number\n");
	 scanf("%s",&std[i].name);
	 printf("enter age\n");
	 scanf("%d",&std[i].age);
	 printf("enter marks\n");
	 scanf("%d",&std[i].marks);
	 
    }
     	int team;
     	char a[10];
     	for( i=0;i<n;i++){
     		if(std[i+1].marks>std[i].marks)
     		{
     			team=std[i].marks;
     			std[i].marks>std[i+1].marks;
     			std[i+1].marks=team;
     			
     			team=std[i].age;
     			std[i].age>std[i+1].age;
     			std[i+1].age=team;
     			
     			*a=std[i].name;
     			*std[i].name>*std[i+1].name;
     			std[i+1].name=*a;
			 }
     }
}
