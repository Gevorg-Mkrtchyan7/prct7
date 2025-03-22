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
		if(b == 4){
		goto a;
		}
		num /= 10;			
	}
	goto end;
a:
	num = num1;
	while(num){
		b = num % 10;
		if(b == 7){
		goto b;
		}
		num /= 10;
	}
	goto end;

b:

	num = num1;
	while(num){
		b = num % 10;
		if (b == 4 || b == 7){
		}else{
		goto end;
		}
		num /= 10;
	}
	
	printf("It is lucky number \n");
	goto end2;

end:

	printf("It isn't luchy number \n");
	
end2:

	return 0;

}
