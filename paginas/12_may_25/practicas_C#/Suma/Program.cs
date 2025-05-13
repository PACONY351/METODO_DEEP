using System;

class Program
{
	static void Main()
	{
		Console.WriteLine("Suma de dos numeros");
		
		Console.Write("Ingresa el primer numero: ");
		double numero1 = Convert.ToDouble(Console.ReadLine());

		Console.Write("Ingresa el segundo numero: ");
		double numero2 = Convert.ToDouble(Console.ReadLine());

		double resultado = numero1 + numero2;
		Console.Write($"El resultado es: {resultado}\n");
	}
}
