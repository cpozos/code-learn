#include <iostream>

void Suma2(int numero)
{
	numero = numero + 2;
}

void Suma2Puntero(int* pNumero)
{
	int valorDeNumero = *pNumero;
	*pNumero = valorDeNumero + 2;
}

int main()
{
	int numero = 1;

	// Sin puntero no se modifica el valor de numero
	Suma2(numero);
	Suma2(numero);

	// Usando punteros, si
	int* pNumero = &numero;
	Suma2Puntero(pNumero);
	Suma2Puntero(pNumero);

	int otronumero = 10;
	pNumero = &otronumero;
	Suma2Puntero(pNumero);
	Suma2Puntero(pNumero);
}
