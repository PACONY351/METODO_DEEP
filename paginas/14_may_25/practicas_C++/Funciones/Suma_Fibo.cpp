#include <iostream>
#include <stdio.h>
// 	PROTOTIPOS
void menu();
int suma(int a, int b);
double suma(double a, double b);
int fibonacci(int a);

// 	MAIN
int main(){ menu(); return 0; }

void menu()
{
	int res = suma(50, 20);
	double resf = suma(50.5, 44.3);
	int fibo = fibonacci(5);
	std::cout<<"Enteros 50 + 40 = "<<res<<std::endl;
	std::cout<<"Double 50.5 + 44.3 = "<<resf<<std::endl;
	std::cout<<"El Fibonacci de 5 = "<<fibo<<std::endl;
}

//	FUNCIONES
int suma(int a, int b){ return a + b; }

double suma(double a, double b){ return a + b;}

int fibonacci(int a)
{
	if(a <= 1){
		return a;
	}else{
		return fibonacci(a - 1) + fibonacci(a - 2); 
	}
}
