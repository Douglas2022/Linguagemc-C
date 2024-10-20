#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float num1,num2;
	char op;
	
	printf("\nEntre com o operador numero\n");
	scanf("%f %c %f",&num1,&op,&num2);
	{
		if(op == '+')
		printf(" = %.2f",num1 + num2);
		else if (op == '-')
			printf(" = %.2f",num1 - num2);
			else if (op == '/')
			printf(" = %.2f",num1 / num2);
			else if (op == '*')
			printf(" = %.2f",num1 * num2);
			else
			{
				printf("\nOperaco invalida!");
				printf("\n");
			}
			
	}
	
	return 0;
}
