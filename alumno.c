#include <stdio.h>
#include <stdlib.h>
#include "ld.h"
#include "alumno.h"
int cantar(int *f,char *bxd)
{
	char * a;
	ld* x;
	gets(a);
	/*este es unarchivo de archivos */
	FILE *fichero;
	char letra;
	int b=0;
	fichero = fopen(a,"r");
	if (fichero == NULL) {
		printf( "No se puede abrir el fichero.\n" );
		exit( 1 );
	}

	printf( "Contenido del fichero:\n" );
	letra = getc(fichero);
	while (feof(fichero) == 0) {
		printf( "%c",letra );
		letra = getc(fichero);
		if (b==0) {
			x =CreaLista(letra);
			b=1;
		}else{
			inserta(x,letra);
		}
	}
	despliga(x);
	printf("contar: %d\n",contar(x) );
	aMatriz(x,bxd);
	freMatriz(x,f);
	if (fclose(fichero)!= 0)
		printf( "Problemas al cerrar el fichero\n" );
return contar(x);
}
