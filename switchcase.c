#include <stdio.h>
main()
{
	printf("Enter a number from 1 to 5\n");
	int n;
	printf("Enter your choice:");
	scanf("%d",&n);
	printf("_________________________________________________________________________________________________\n");
	switch(n)
	{
		case 1:
			{
				printf("Food Item: Pasta\n");
				printf("Prize: 375");
				break;
			}
		case 2:
			{
				printf("Food Item: Pizza\n");
				printf("Prize: 400");
				break;
			}
		case 3:
			{
				printf("Food Item: French Fries\n");
				printf("Prize: 100");
				break;
			}
		case 4:
			{
				printf("Food Item: Sandwitch\n");
				printf("Prize: 150");
				break;
			}
		case 5:
			{
				printf("Food Item: Noodles\n");
				printf("Prize: 250");
				break;
			}
		default:
			{
				printf("INVALID INPUT");
				
			}			
	}
}
