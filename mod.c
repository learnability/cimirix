int mod()
{
	printf("Enter 2 numbers: ");
	int a,b,m;
	scanf("%d %d", a,b);
	if(a>=b)
	{
		m=a%b;
		printf("%d % %d = %d",a,b,m);
	}
	else if(b>a)
	{
		printf("Error! 1st number has to be greater than 2nd number");
	}
	return 0;
}
	
