using System;

class Program
{
	static void Main()
	{
		Console.Write("Peso (kg): ");
		double peso = Convert.ToDouble(Console.ReadLine());
		Console.Write("Altura (m): ");
		double altura = Convert.ToDouble(Console.ReadLine());
		double imc = peso / (altura * altura);

		if(imc > 30){
			Console.Write("Obeso\n");
		}else if(imc > 25){
			Console.Write("Sobrepeso\n");
		}else if(imc > 18){
			Console.Write("Normal\n");
		}else{
			Console.Write("Bajo\n");
		}
		
		Console.Write($"IMC: {imc}\n");
	}
}
