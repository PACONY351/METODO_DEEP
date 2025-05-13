#include <iostream>
#include <stdio.h>


void menu();
void opciones(int opcion);
void bucle();
void buclePares();
void bucleImpares();

int main()
{
	menu();
	return 0;
}

void menu()
{
	int opcion;
	std::cout<<"Menu"<<std::endl;
	std::cout<<"1. Bucle N"<<std::endl;
	std::cout<<"2. Bucle Pares"<<std::endl;
	std::cout<<"3. Bucle Impares"<<std::endl;
	std::cout<<"otro. Salir"<<std::endl;
	std::cout<<"Op: ";
	std::cin>>opcion;
	
	opciones(opcion);
}

void opciones(int opcion)
{
	switch(opcion){
		case 1:
			bucle();
			break;
		case 2:
			buclePares();
			break;
		case 3:
			bucleImpares();
			break;
		default:
			std::cout<<"Adios"<<std::endl;
			break;	
	}
}

void bucle()
{
	std::cout<<"Imprimire Hola, Mundo 10 veces"<<std::endl;	
	for(int i = 0; i < 10 ; i++){
		std::cout<<"Hola, Mundo"<<std::endl;
	}
}

void buclePares() 
{
    std::cout << "100 números pares:" << std::endl;
    for(int i = 2; i <= 200; i += 2) {
        std::cout << i << std::endl;
    }
}

void bucleImpares() 
{
    std::cout << "100 números impares:" << std::endl;
    for(int i = 1; i < 200; i += 2) {
        std::cout << i << std::endl;
    }
}
