using System;

class Program
{
	static void Main()
	{
		Console.Write($" : {Mayor(1,2,3)}\n");
		Saludar();
	}

	static int Mayor(int a, int b, int c){return Math.Max(a, Math.Max(a,b));}
	static void Saludar(string nombre = "Invitado"){Console.WriteLine($"Hola, {nombre}");}

}
