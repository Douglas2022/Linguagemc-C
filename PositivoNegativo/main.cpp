#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int num;
	printf("\nEntre com um nunero inteiro: ");
	scanf("%d",&num);
	if(num >= 0)
	{
		if(num % 2== 0)
		{
			printf("\nO numero e par e positivo");
		}
		else
		{
			printf("\nO numero e impar e negativo");

		}
	}
	
	return 0;
}
