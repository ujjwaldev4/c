#include<stdio.h>
int main()
{
	int m;
	printf("enter month no");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("1");
			break;
			
		case 3:
			printf("3");
			break;
			
		case 5:
			printf("5");
			break;
			
		case 7:
			printf("7");
			break;
		
		case 8:
			printf("8");
			break;
			
		case 10:
			printf("10");
			break;
			
		case 12:
			printf("31");
			break;
			
		case 2:
			printf("28/29 accounting to leap year");
			break;
		
		case 4:
			printf("4");
			break;
			
		case 6:
			printf("6");
			break;
			
		case 9:
			printf("9");
			break;
			
		case 11:
			printf("30");
			break;
		default:
			printf("wrong input");
			break;
	}
	return 0;
}
