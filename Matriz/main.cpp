#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int list[20] = {3,15,45,78,96,88,10,5,8,3,65,42,32,84,44,99,88,77,22,20};
	int i = 0;
	for(i = 0; i<20; i++)
		if(list[i]%2 == 0)
		{
			printf("%d\n",list[i]);
		}

	
	
		return 0;
}
