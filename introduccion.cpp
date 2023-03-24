// Este es un comentario
/*

this is a comment
this is too
format-hex .\Introduccion.exe > file.txt
*/
#include <iostream>

int main()
{
	for (int i = 0; i < 3; i = i + 2)
	{
		// Definiciones
		float primerNumero = 0;
		int segundoNumero = 0;
		int resultado = 0;

		while (primerNumero < 1)
		{
			std::cout << "Ingresa un numero";
			std::cin >> primerNumero;
		}

		std::cout << "Ingresa el segundo numero";
		std::cin >> segundoNumero;

		bool isSegundoNumeroGreaterThan10 = segundoNumero > primerNumero;
		float division = (float)primerNumero / (float)segundoNumero;
		if (isSegundoNumeroGreaterThan10) {
			resultado = primerNumero;
		}
		else {
			resultado = primerNumero + segundoNumero;
		}

		std::cout << resultado;
		std::cout << "\n";
		std::cout << division;
	}
}
