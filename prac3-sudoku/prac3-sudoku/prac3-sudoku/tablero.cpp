
#include "tablero.h"
#include <fstream>
#include <iostream>

using namespace std;

void iniciaTablero(tTablero tablero) {
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) iniciaCasilla(tablero[i][j]);
	}
}

bool cargarTablero(string nombreFichero, tTablero tablero) {
	bool cargado = true;
	ifstream archivo;
	char c;
	archivo.open(nombreFichero);
	if (!archivo.is_open()) cargado = false;
	else {
		while (!archivo.eof()) {
			for (int i = 0; i < DIM; i++) {
				for (int j = 0; j < DIM; j++) {
					archivo >> c;
					rellenaCasilla(tablero[i][j], c, false);
				}
			}
		}
	}
	archivo.close;
	return cargado;
}

void dibujarTablero(const tTablero tablero) {
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			cout << " " << tablero[i][j].valor << " ";
		}
		cout << endl;
	}
}
bool ponerNum(tTablero tablero, int fila, int col, int c) {
	bool puesto = false;
	if (tablero[fila][col].estado == vacia || pertenece(tablero[fila][col].conjunto, c)) {
		puesto = true;
		tablero[fila][col].valor = c;
		annadeElemento(tablero[fila][col].conjunto, c);
	}
	return puesto;
}
bool borrarNum(tTablero tablero, int fila, int col);
bool tableroLleno(const tTablero tablero);
void rellenarSimples(tTablero tablero);
