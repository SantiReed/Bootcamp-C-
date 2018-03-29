# include "Operaciones_matematicas.h"
# include "iostream"

using namespace std;

int cuadrado()
{
	int cuad;
	cout << "Escriba el número cuyo cuadrado desea calcular: " << endl;
	std::cin >> cuad;
	int result = cuad * cuad;
	return result;
}

int suma ()
{
	int sum1;
	int sum2;
	cout << "Escriba el primer sumando: " << endl;
	std::cin >> sum1;
	cout << "Escriba el segundo sumando: " << endl;
	std::cin >>sum2;
	int result = sum1 + sum2;
	return result;
}

double area ()
{
	double rad;
	cout << "Escriba el radio del circulo: " << endl;
	std::cin >> rad;	
	double result = (rad*rad) * PI;
	return result;
}

double max ()
{
	double num1;
	double num2;
	cout << "Escriba el primer número: " << endl;
	std::cin >> num1;
	cout << "Escriba el segundo número: " << endl;
	std::cin >> num2;	
	double result = MAX(num1, num2);
	return result;
}
