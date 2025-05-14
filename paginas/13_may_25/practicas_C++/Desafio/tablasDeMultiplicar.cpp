#include <iostream>
#include <stdio.h>

void menu();
void generador(int numero);

int main()
{
	menu();
	return 0;
}

void menu()
{
	int numero;
	std::cout<<"Generador de tablas"<<std::endl;
	std::cout<<"Dame un numero:";
	std::cin>>numero;
	generador(numero);
}

void generador(int numero)
{
	for(int i = 0 ; i < 10; i++){
		std::cout<<" "<<numero<<" * "<<i+1<<" = "<<numero*(i+1)<<std::endl;
	}
}
