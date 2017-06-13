#ifndef _ListaDoble_
#define _ListaDoble_
typedef struct ld ld;
struct ld{
  int i;
  char c;
  ld * ant;
  ld * sig;
};
ld *CreaLista(char);
int inserta(ld*,char);
int busca(ld*,char);
//int elimina(ld*,int);
void despliga(ld*);
int contar(ld*);
void aMatriz(ld*, char*);
void freMatriz(ld*, int*);
#endif
