#pragma once

#include "casilla.h"
#include <string>

using namespace std;

const int DIM = 9;

typedef tCasilla tTablero[DIM][DIM];

void iniciaTablero(tTablero tablero);
bool cargarTablero(string nombreFichero, tTablero tablero);
void dibujarTablero(const tTablero tablero);
bool ponerNum(tTablero tablero, int fila, int col, int c);
bool borrarNum(tTablero tablero, int fila, int col);
bool tableroLleno(const tTablero tablero);
void rellenarSimples(tTablero tablero);
