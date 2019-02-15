
#include "casilla.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void iniciaCasilla(tCasilla &casilla) {
	casilla.estado = vacia;
	cjto_lleno(casilla.conjunto);
}

void rellenaCasilla(tCasilla &casilla, char c, bool fij = false) {
	if (c == ' ') {
		casilla.estado = vacia;
		casilla.valor = 0;
	}
	else{
		casilla.valor = int(c);
		if (fij == false) casilla.estado = rellenada;
		else casilla.estado = fija;
		annadeElemento(casilla.conjunto, int(c));
	}
}

void dibujaCasilla(const tCasilla &casilla) {
	if (casilla.estado == fija) colorFondo(1);
	else if (casilla.estado == rellenada) colorFondo(4);
	cout << casilla.valor << endl;
}

bool esSimple(const tCasilla &casilla, int &numero) {
	bool ok = false;
	numero = 0;
	if (casilla.estado == vacia) {
		if (esUnitario(casilla.conjunto, numero)) ok = true;
	}
}
void colorFondo(int color) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 15 | (color << 4));
}