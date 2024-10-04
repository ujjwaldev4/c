#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	switch(marks/10)
	{
		case 9:
			printf("a");
			break;
			
		case 8:
			printf("b");
			break;
			
		case 7:
			printf("c");
			break;
			
		case 6:
			printf("d");
			break;
		
		default:
			printf("f");
			break;
	}
	return 0;
}
