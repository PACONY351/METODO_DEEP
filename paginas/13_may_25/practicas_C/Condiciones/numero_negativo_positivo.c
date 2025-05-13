#include<stdio.h>


void datos();
void tipo(int numero);

int main()
{
	datos();
}

void datos()
{
	int numero;
	printf("Dame un numero: ");
	scanf("%d", &numero);
	tipo(numero);
}

void tipo(int numero)
{
	if(numero<0){
		printf("El numero es negativo\n");
	}else if(numero>0){
		printf("El numero es positivo\n");
	}else{
		printf("El numero es 0\n");
	}
}
