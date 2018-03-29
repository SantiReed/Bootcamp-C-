#include "iostream"
#include "Operaciones_matematicas.h"
#include "Operaciones_preprocesador.h"
#include "string"
#include "conio.h"

using namespace std;

int main ()
{
	string name;
	string surname;
	int answer;	
	cout << "Escriba el número de la operación que desea realizar:"  << endl;
	cout << "Cuadrado: 1" << endl;
	cout << "Suma: 2" << endl;
	cout << "Área (círculo): 3" << endl;
	cout << "Máximo de dos números: 4" << endl;
	cout << "Concatenación: 5" << endl;
	cout << "Impresión por pantalla: 6" << endl;
	cout << "Comparación de cadena: 7" << endl;
	cout << "Operaciones binarias: 8" << endl;
	cout << "Intercambio de variables: 9" << endl;
	cin >> answer;
	cout << "Ha seleccionado la opción " << answer << "." << endl;
	switch (answer)
	{
		case 1:			
			printf ("El resultado es: %d\n", cuadrado());
			getch();
			break;
		case 2:
			printf ("El resultado es: %d\n", suma());
			getch();
			break;
		case 3:
			printf ("El resultado es: %f\n", area());
			getch();
			break;
		case 4:
			printf("El resultado es: %f\n", max());
			getch();
			break;
		case 5:			
			concnombres(name, surname);
			getch();
			break;
		case 6:
			printf("%s\n", LIT);
			getch();
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
	}
}