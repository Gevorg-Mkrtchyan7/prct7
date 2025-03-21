# include <stdio.h>

int main()
{
	int num = 0;
	do {
	printf("Enter a number: ");
	scanf("%d", &num);
	} while (num < 0);

	int a = 0;
	int b = 1;
	int c = 0;

	for(int i = 1; i <= num; i++){
		c = b;
		b = a + b;
		a = c;
	}
	printf("Result is: %d \n", c);

	return 0;
}
