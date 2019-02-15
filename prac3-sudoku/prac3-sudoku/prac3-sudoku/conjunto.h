
const int TAM_CONJUNTO = 9;

typedef bool tConjunto[TAM_CONJUNTO];

void cjto_vacio(tConjunto &c); //inicializa el conjunto c al conjunto vacio;
void cjto_lleno(tConjunto &c);//inicializa el conjunto c al conjunto formado por todos los valores [1,9]
bool pertenece(const tConjunto &c, int e);
void annadeElemento(tConjunto &c, int e);
void borraElemento(tConjunto &c, int e);
int numElems(const tConjunto &c, int e);
bool esUnitario(const tConjunto &c, int &e);


