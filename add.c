#include<stdio.h>
int add()
{
	printf("Enter first number: ";
	scanf("%d", &a);
	int a, b, sum;
	printf("Enter second number: ";
	scanf("%d", &b);
	printf("The sum of the numbers is: %d", sum=a+b);
	return 1;
}	

int main()
{
	printf("Welcome to a Simple Calculator");
	printf("\n\nChoose an operation:\n1.Add\n2.Subtract\n3.Divide");
	int choice;
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			add();
			break;
			
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}	
	
	return 0;
}

	
	
	
