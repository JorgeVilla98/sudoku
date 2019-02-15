#include "conjunto.h"

typedef enum {vacia, fija, rellenada} tEstado;

typedef struct {
	tEstado estado;
	int valor;
	tConjunto conjunto;
}tCasilla;

void iniciaCasilla(tCasilla &casilla);
void rellenaCasilla(tCasilla &casilla, char c, bool fija = false);
void dibujaCasilla(const tCasilla &casilla);
bool esSimple(const tCasilla &casilla, int &numero);
void colorFondo(int color);