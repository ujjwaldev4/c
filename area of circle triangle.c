#include<stdio.h>
int main()
{
	int n,b,h,r;
	printf("enter 1 for circle,2 for triangle, 3 for circum of circle");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter radius");
			scanf("%d",&r);
			printf("area of circle=%f",(3.14*r*r));
			break;
			
		case 2:
			printf("enter breath & height");
			scanf("%d%d",&b,&h);
			printf("area of triangle=%f",(b*h)/2);
			break;
			
		case 3:
			printf("enter radius");
			scanf("%d",&r);
			printf("circum of circle=%f",(2*3.14*r));
			break;
			
	
		default:
			printf("wrong choice");
			break;
	}
	return 0;
}
