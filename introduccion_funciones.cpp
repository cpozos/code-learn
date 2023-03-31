// Este es un comentario
/*

this is a comment
this is too
format-hex .\Introduccion.exe > file.txt
*/
#include <iostream>


// TIPO_DATO_REGRESA NOMBRE_FUNCION(TIPODATO1 par1, TIPODATO2 par2, ..., TIPODATON parN)
// { ... }

int LeerEntradaUsuario()
{	
	int valorEnEntero = 0;

	// Ejercicio:
	// Realizar programa que pida un numero entero.
	// Si no es un entero valido que siga pidiendolo hasta que se ingrese uno valido.

	bool elNumeroIngresadoEsEntero = false;
	while (!elNumeroIngresadoEsEntero)
	{
		// Validar entrada del usuario
		std::string valor;
		std::cout << "Ingresa un numero: ";
		std::cin >> valor;

		// Intentar covnertir a numero entero
		int scan_value = std::sscanf(valor.c_str(), "%d", &valorEnEntero);

		// Valida que la conversion fue realizada con exito
		elNumeroIngresadoEsEntero = scan_value != 0;
		if (!elNumeroIngresadoEsEntero)
		{
			std::cout << "No es valido";
		}
	}

	return valorEnEntero;
}

void ImprimirHola()
{
	std::cout << "Hola" << std::endl;
}

void ImprimirV2(std::string texto, bool conSaltoDeLinea = true)
{
	if (conSaltoDeLinea)
	{
		std::cout << texto << std::endl;
	}
	else
	{
		std::cout << texto;
	}
}

void Imprimir(std::string texto)
{
	std::cout << texto << std::endl;
}

void ImprimeSuma(int n1, int n2)
{
	int a = n1 + n2;
	std::cout << a << std::endl;
}

int Suma()
{
	int num1 = LeerEntradaUsuario();
	int num2 =  LeerEntradaUsuario();
	int resultadoSuma = num1 + num2;
	std::cout << resultadoSuma << std::endl;
	return resultadoSuma;
}

int SumaV2(bool imprimir = false)
{
	int num1 = LeerEntradaUsuario();
	int num2 =  LeerEntradaUsuario();

	if (imprimir)
	{
		ImprimeSuma(num1, num2);
	}

	return num1 + num2;
}

int main()
{
	Imprimir("Bienvenido a mi programa");
	Suma();
	SumaV2(true);
	ImprimirV2("Con salto de linea");
	ImprimirV2("Sin salto de linea", false);
	int resultado = LeerEntradaUsuario();

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

		// Guardar 3 enteros que el usuario teclee
		int ent1;
		int ent2;
		int ent3;

		for (int i = 0; i < 3; i++)
		{
			std::cout << "Ingresa un numero: ";
			
			/*
			switch (i)
			{
			case 0:
				std::cin >> ent1;
				break;
			case 1:
				std::cin >> ent2;
				break;
			case 3:
				std::cin >> ent3;
				break;
			default:
				break;
			}*/
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
	Imprimir("Gracias por utilizar mi programa.");
}
