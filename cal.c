#include<stdio.h>
#include<math.h>

int add()
//Function to add two numbers
{
	printf("Enter first number:");
	int a, b, sum;
	scanf("%d", &a);
	
	printf("Enter second number:");
	scanf("%d", &b);
	printf("The sum of the numbers is: %d\n", sum=a+b);
	return 1;
}

int subtract()					
//FUNCTION FOR SUBTRACTING TWO NUMBERS		
{
	int a,b,s;                           //initializing
	printf("Enter the two numbers:");	
	scanf("%d %d", &a,&b);		     //input from user
	s=a-b;							//aDDING a and b
	printf("%d-%d=%d\n",a,b,s);				//printing result
	return 0;
}
	
void mlpy() 																				/*Function for multiplication*/
{
	int a,b;
	printf(" Enter two numbers:"); 
	scanf ("%d %d", &a,&b); 															/*Asking the user for two inputs*/
	printf(" %d x %d = %d\n",a ,b, a*b);												/*Printing*/
}

void div()
{
  float a,b,ans;
  printf("Enter ur first number\n");
  scanf("%f",&a);
  printf("Enter ur second number \n");
  scanf("%f",&b);
  if(b!=0)
  ans= a/b;
   printf("Quotent : %f\n", ans);
 }
 
int mod()
{
	printf("Enter 2 numbers: ");
	int a,b,m;
	scanf("%d %d", &a,&b);
	if(a>=b)
	{
		m=a%b;
		printf("%d % %d = %d\n",a,b,m);
	}
	else if(b>a)
	{
		printf("Error! 1st number has to be greater than 2nd number\n");
	}
	return 0;
}
	

 
 void ln()
{	
	float a,b;
	printf("Enter a number");
	scanf("%f", &a);
	b=log10(a);
	printf("log(%f)=%f\n",a,b) ;
} 

 void pow1()
{
float a,b,ans;
printf("Enter you number and its power\n");
scanf("%f,%f",&a,&b);
ans=pow(a,b);
printf("%f\n",ans);
}
 	
int main()
{
	printf("\nWelcome to a Simple Calculator");
	
	printf("\n\nChoose an operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Log\n6.Power\n7.Mod\n8.Exit\n");
	int choice;
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			add();
			main();
			
		case 2:
			subtract();
			main();
		case 3:
			mlpy();
			main();
			
		case 4:
			div();
			main();
		case 5:
			ln();
			main();
		case 6:
			pow1();
			main();
		case 7:
			mod();
			main();
		case 8:
			exit(0);
		default:
			printf("\nInvalid Choice ! Try again !! "); 
			
	}	
	
	return 0;
}

	
	
	
