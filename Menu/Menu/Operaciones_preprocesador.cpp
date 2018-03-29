#include "Operaciones_preprocesador.h"
#include "iostream"
#include "string"

using namespace std;

void concnombres (string name, string surname)
{	
	printf ("El nombre de las variables concatenadas es: %s\n", CON(name, surname));
}