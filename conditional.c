# include <stdio.h>
main()
{
	int a;
	printf("Enter the marks :");
	scanf("%d",&a);
	
	if(a<0 || a>100)
	{
		printf("Invalid entry");
	}
	else
	{
		if(a<=100 && a>=85)
	{
		printf("GRADE A");		
	}
	else if(a<85 && a>=70)
	{
		printf("GRADE B");
	}
	else if(a<70 && a>=55)
	{
		printf("GRADE C");
	}
	else if(a<55 && a>=40)
	{
		printf("GRADE D");
	}
	else
	{
		printf("GRADE F");
	}
	}
	
	
}
