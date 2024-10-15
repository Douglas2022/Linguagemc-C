#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n1,n2,maior;
	printf("\n Digite um numero: ");
	scanf("%d",&n1);
	printf("\n Digite um numero: ");
	scanf("%d",&n2);
	
	if(n1>n2)
	maior = n1;
	if(n1<n2)
	maior = n2;
	
	printf("\nO maior e:%d",maior);
	
	
	
	

	
	
	
	return 0;
}
