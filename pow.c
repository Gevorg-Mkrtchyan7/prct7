# include <stdio.h>

int main()
{
	int num1 = 0;
	int pow = 0;
	int a = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter a pow: ");
	scanf("%d", &pow);

	while(pow){
		a *= num1;
		pow--;
	}
	printf("Result is: %d \n", a);

	return 0;
}
