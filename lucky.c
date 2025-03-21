# include <stdio.h>

int main()
{
	int b = 0;
	int a = 0;
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	int num1 = num;

	while(num){
		b = num % 10;
		if(b == 4){}
		num /= 10;			
	}
	num = num1;
	while(num){
		b = num % 10;
		if (b == 7){}
		num /= 10;
	}
	
	printf("It is lucky number \n");

a:
	
	return 0;

}
