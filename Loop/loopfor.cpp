#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	int soma=0;
	int n=0;
	
	for(int i=0;i<=50; i++)
	{
		printf("%d\n",n);
		soma = soma + n;
		n = n+2;
	}
	printf("%d",soma);

	
	return 0;
}
