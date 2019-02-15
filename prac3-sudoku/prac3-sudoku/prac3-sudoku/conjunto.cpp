#include "conjunto.h"

void cjto_vacio(tConjunto &c) { //inicializa el conjunto c al conjunto vacio;
	for (int i = 0; i < TAM_CONJUNTO; i++) c[i] = false;
} 

void cjto_lleno(tConjunto &c) { //inicializa el conjunto c al conjunto formado por todos los valores [1,9]
	for (int i = 0; i < TAM_CONJUNTO; i++) c[i] = true;
}
//inicializa el conjunto c al conjunto formado por todos los valores [1,9]
bool pertenece(const tConjunto &c, int e) {
	bool encontrado = false;
	for (int i = 1; i < TAM_CONJUNTO; i++) {
		if (e == i && c[i] == true) encontrado = true;
	}
	return encontrado;
}

void annadeElemento(tConjunto &c, int e) {
	c[e] = true;
}
void borraElemento(tConjunto &c, int e) {
	c[e] = false;
}

int numElems(const tConjunto &c, int e) {
	e = 0;
	for (int i = 1; i < TAM_CONJUNTO; i++) {
		if (c[i] == true) e++;
	}
}
bool esUnitario(const tConjunto &c, int &e) {
	bool unitario = false;
	int contador = 0;
	for (int i = 0; i < TAM_CONJUNTO; i++) {
		if (c[i] == true) {
			e++;
			e = i;
		}
	}
	if (contador == 1) unitario = true;
	else e = 0;
	return unitario;
}
