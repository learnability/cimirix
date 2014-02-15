int subtract()					
//FUNCTION FOR SUBTRACTING TWO NUMBERS		
{
	int a,b,s;                           //initializing
	printf("Enter the two numbers: ";	
	scanf("%d %d", &a,&b);		     //input from user
	s=a-b;							//aDDING a and b
	printf("%d-%d=%d",a,b,s);				//printing result
	return 0;
}
