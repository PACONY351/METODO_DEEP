#include <stdio.h>


int factorial(int numero);
void menu();
void menu2();
void swap(int *a,int *b);

int main()
{
	menu();
	menu2();
}



int factorial(int numero)
{
	if(numero == 0){
		return 1;
	}else{
		return numero * factorial(numero -1);	
	}
}

void menu()
{
	int numero, fac;
	printf("Dame un numero para darte su factorial\n");
	printf("Numero: ");
	scanf("%d", &numero);
	fac = factorial(numero);
	printf("Factorial: %d\n", fac);
}

void menu2()
{
	int a = 25;
	int b = 50;
	printf("Cambiare dos valores en dos punteros\n");
	printf("A: %d , B: %d\n", a, b);
	swap(&a ,&b);
	printf("A: %d , B: %d\n", a, b);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
