# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	int num1 = num;
	int a = 0;

	while(num > 0){
		num /= 10;
		a++;
	}
	
	int a1 = a;

	int b = 0;
	int c = 1;
	int d = 0;

	num = num1;

	while(a){
		b = num % 10;
		int x = a1;
		while(a1){
			c = c * b;
			a1--;
		}
		a1 = x;
		d = d + c;
		c = 1;
		num /= 10;
		a--;
	}	
	if(num1 == d){
	printf("It is amstrong number \n");
	} else {
	printf("It isn't amstrong number \n");
	}

	return 0;
}
