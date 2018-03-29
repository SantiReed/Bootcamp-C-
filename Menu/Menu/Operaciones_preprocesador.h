#include "string"
using namespace std;

#ifndef OPERACIONES_PREPROCESADOR_H
#define OPERACIONES_PREPROCESADOR_H

#define CON(name1, name2) #name1###name2

#define LIT "Esta es una impresión literal por pantalla"

void concnombres(string name, string surname);

#endif