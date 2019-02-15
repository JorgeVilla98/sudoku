#pragma once

#include "juego.h"

const int MAX_SUDOKUS = 20;

typedef tSudoku tSudokus[MAX_SUDOKUS];

typedef struct {
	tSudokus sudokus;
	int contador;
}tListaSudokus;

void creaListaVacia(tListaSudokus &lista);
bool cargar(tListaSudokus &lista);
void mostrar(const tListaSudokus &lista);