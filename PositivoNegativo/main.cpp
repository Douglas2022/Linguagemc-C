#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int lado1,lado2,lado3;
	int s1,s2,s3;
	
	printf("\nEntre com o trinagulo do quadrado reto!\n");
	scanf("%d %d %d",&lado1,&lado2,&lado3);
	
	
	s1= lado1 * lado1;
	s2= lado2 * lado2;
	s3= lado3 * lado3;
	
	if(lado1>0 && lado2>0&&lado3>0)
	{
		if(s1==s2+s3 || s2 ==s1+s2 ||  s2 ==s1+s3 )
		{
			printf("\nE um triangulo!");
		}
		else
		{
			printf("\nNao pode ser um triangulo!");
		}
		
	}


		
	
	
	
	return 0;
}
