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

		char caracter = '@';
		const int cantidadNumeros = 6;
		int numeros[cantidadNumeros] = { 1, 2, 3, 8, 9, 8 };
		for (int i = 0; i < cantidadNumeros; i++)
		{
			std::cout << numeros[i] << std::endl;
		}

		// Validar entrada del usuario
		std::string valor;
		int valorEnEntero = 0;
		std::cout << "Ingresa un numero: ";
		std::cin >> valor;

		// Valida que sea un numero entero
		int scan_value = std::sscanf(valor.c_str(), "%d", &valorEnEntero);
		if (scan_value == 0)
		{
			std::cout << "No es valido";
		}
		 
		// Ejercicio:
		// Realizar programa que pida un numero entero.
		// Si no es un entero valido que siga pidiendolo hasta que se ingrese uno valido.

		// Guardar 3 enteros que el usuario teclee
		int ent1;
		int ent2;
		int ent3;

		for (int i = 0; i < 3; i++)
		{
			std::cout << "Ingresa un numero: ";
			if (i == 0)
			{
				std::cin >> ent1;
			}
			else if (i == 1)
			{
				std::cin >> ent2;
			}
			else if (i == 2)
			{
				std::cin >> ent3;
			}
		}

		// Ahora utilizando arreglos
		const int maxNumeros = 8000;
		int numerosIngresados[maxNumeros];
		for (int i = 0; i < maxNumeros; i++)
		{
			std::cout << "Ingresa un numero: ";
			std::cin >> numerosIngresados[i];
		}

		while (primerNumero < 1)
		{
			std::cout << "Ingresa un numero";
			std::cin >> primerNumero;
		}

		std::cout << "Ingresa el segundo numero";
		std::cin >> segundoNumero;

		bool isSegundoNumeroGreaterThan10 = segundoNumero > primerNumero;
		bool sonIguales = segundoNumero == primerNumero;
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
