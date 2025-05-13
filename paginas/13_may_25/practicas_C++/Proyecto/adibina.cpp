#include <iostream>
#include <cstdlib>
#include <ctime>

int numeroAdibina();
void menu();

int main()
{
	menu();	
}


int numeroAdibina()
{
	srand(time(0));
	int numero = rand() % 100 + 1;
	return numero;
}

void menu()
{
	std::cout<<"Adibina un numero del 1 al 100\n tienes 5 intentos"<<std::endl;
	for(int i = 0; i < 5; i++){
		int cantidad;
		int numero = numeroAdibina();
		std::cout<<"Intento n: "<<i+1<<std::endl;
		std::cout<<"Numero: ";
		std::cin>>cantidad;
		if(cantidad == numero){
			std::cout<<"Ganaste!!"<<std::endl;
			break;
		}else if(i == 4){
			std::cout<<"Perdiste el numero era: "<<numero<<std::endl;
		}
	}
}
