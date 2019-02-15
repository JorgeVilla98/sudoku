
#include "tablero.h"
#include <string>

using namespace std;

typedef struct {
	int puntos;
	string nArchivo;
}tSudoku;

typedef struct {
	tTablero tablero;
	tSudoku sudoku;
}tJuego;

void iniciarJuego(tJuego &juego, const tSudoku &sudoku);
void mostrarJuego(const tJuego &juego);
bool cargaJuego(tJuego &juego, const tSudoku &sudoku);
int jugarUnSudoku(const tSudoku &sudoku);