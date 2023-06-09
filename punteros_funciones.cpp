#include <iostream>

void ImprimaMensaje(std::string mensaje)
{
	std::cout << mensaje << std::endl;
}

void ImprimaMensajeConHola(std::string saludo)
{
	std::cout << "Hola " + saludo << std::endl;
}

void EjecturaDeFuncion(void (*p)(std::string))
{
	(*p)("Ejecutando");
}

std::string IniciarPizza()
{
	return "Masa";
}

std::string AgregarCondimentos(std::string pizza)
{
	pizza.append("Pina");
	pizza.append("Jamon");
	pizza.append("Catsup");
	pizza.append("Queso");
	return pizza;
}

std::string AgregarCondimentosParaMexicana(std::string pizza)
{
	pizza.append("Jalapeno");
	return pizza;
}

std::string AgregarExtraQueso(std::string pizza)
{
	pizza.append("Queso");
	return pizza;
}

int main()
{
	// Explicitamente
	// Dentro de main(), conocemos los nombres de las funciones
	ImprimaMensaje("Hola");
	ImprimaMensajeConHola("saludos");

	// Implicitamente.
	// EjecturaDeFuncion no conoce los nombres de las funciones, solo sabe que recibirá las direcciones en memoria de funciones con una firma determinada.
	// La firma en este caso es: no regresa ningun valor y recibe 1 parametro de tipo std::string
	void (*myPointerFuncion)(std::string);
	myPointerFuncion = &ImprimaMensajeConHola;
	EjecturaDeFuncion(myPointerFuncion);

	/*****************************************************/
  	// EJEMPLO: PIZZAS
	// Super especial usando funciones explicitamente
	/*****************************************************/
	std::string pizzaEspecial = IniciarPizza();
	pizzaEspecial = AgregarExtraQueso(pizzaEspecial);
	pizzaEspecial = AgregarCondimentos(pizzaEspecial);
	pizzaEspecial = AgregarCondimentosParaMexicana(pizzaEspecial);
	
	/*****************************************************/
  	// EJEMPLO: PIZZAS
	// Super especial usando un puntero que va siendo modificado con las direcciones de las diferences funciones.
	/*****************************************************/
	std::string pizzaPointerEspecial = IniciarPizza();
  
  	// Declaro puntero a una funcion que regresa un string y recibe un string. (Firma de la funcion)
	std::string (*myPizzaPointer)(std::string);

  	// Hace que el puntero apunte al a funcion AgregarExtraQueso
	myPizzaPointer = &AgregarExtraQueso;
  	// Ejecuto la funcion a la que esta apuntando el puntero (En este caso AgregarExtraQueso)
	pizzaPointerEspecial = (*myPizzaPointer)(pizzaPointerEspecial);

  	// Hace que el puntero apunte a la funcion AgregarCondimentos
	myPizzaPointer = &AgregarCondimentos;
  	// Ejecuto la funcion a la que esta apuntando el puntero
	pizzaPointerEspecial = (*myPizzaPointer)(pizzaPointerEspecial);

  	// Hace que el puntero apunte a la funcion AgregarCondimentosParaMexicana
	myPizzaPointer = &AgregarCondimentosParaMexicana;
  	// Ejecuto la funcion a la que esta apuntando el puntero
	pizzaPointerEspecial = (*myPizzaPointer)(pizzaPointerEspecial);
	
	/*****************************************************/
	// EJEMPLO PIZZAS usando arrays
	/*****************************************************/
	pizzaPointerEspecial = IniciarPizza();
  
  	// Declaro mi receta: la receta contiene 3 pasos. Receta es un arreglo de 3 punteros a funciones cuya firma es: regresan string y reciben 1 string.
	const int pasos = 3;
	std::string (*receta[pasos])(std::string) = 
	{ 
	 	&AgregarExtraQueso, // Primer puntero en el arreglo apunta a AgregarExtraQueso
	 	&AgregarCondimentos, // Segundo puntero en el arreglo apunta a AgregarCondimentos
   		&AgregarCondimentosParaMexicana, // Segundo puntero en el arreglo apunta a AgregarCondimentosParaMexicana
	};
  	// Recorre todos los pasos en la receta
	for (int i = 0; i < pasos; i++)
	{
    		// Ejecuta la funcion a la que apunta el puntero en la posicion i.
		// Pasandole como para a pizzaPointerEspecial, y asignando el resultado de nuevo a pizzaPointerEspecial
		pizzaPointerEspecial = (*receta[i])(pizzaPointerEspecial);
	}
	
	// Receta para Pizza Super Queso
	std::string pizzaSQ = IniciarPizza();
	const int pasosSQ = 3;
	std::string (*recetaSQ[pasosSQ])(std::string) = 
	{ 
	 	&AgregarExtraQueso,
	 	&AgregarCondimentos,
   		&AgregarExtraQueso,
	};
	for (int i = 0; i < pasosSQ; i++)
	{
		pizzaSQ = (*recetaSQ[i])(pizzaSQ);
	}
}
