# include <stdio.h>

int main()
{
	int a = 0;
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	for(int i = 0; i <= num; i++){
		if(num % i == 0)
			printf("%d  ", i);
	}
	printf("\n");

	return 0;
}
