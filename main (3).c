/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "stdio.h"
int main()
{

	int n1,n2,n3;
	printf("ingresa 3 numeros:");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);

	if(n1==1 && n2==2 && n3==3){
		printf("Acceso permitido\n");
	}else{
		printf("acceso denegado\n");
	}

	return 0;
}