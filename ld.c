#include <stdio.h>
#include <stdlib.h>
#include "ld.h"
ld *CreaLista(char elem){
  ld * l=(ld*)malloc(sizeof(ld));
  if(l!=NULL){
    l->c=elem;
    l->i=1;
    l->ant=NULL;
    l->sig=NULL;
    return l;
  }
  return NULL;
}
int busca(ld* l,char elem){
  ld * tmp=l;
  int x=0;
  while (tmp->c!=elem && tmp->sig!=NULL){
    tmp=tmp->sig;
    x++;
  }
  if (tmp->c!=elem) {
    x=0;
  }
  return x;
}
int inserta(ld* l,char elem){
  int i,p;
  ld * tmp=l;
  p=busca(l,elem);
  if(p==0){
  ld *nl=CreaLista(elem);
  if(l->sig==NULL){
    nl->ant=l;
    l->sig=nl;
    return 1;
  }else{
    int x=0;
    ld*tmp1=l;
    while(tmp1->sig!=NULL){
      tmp1=tmp1->sig;
      x++;
    }
    nl->c=elem;
    nl->ant=tmp1;
    nl->sig=NULL;
    tmp1->sig=nl;
    return 1;
  }
}
for ( i = 0; i < p; i++) {
  tmp=tmp->sig;
}
tmp->i++;
  return 0;
}

int elimina(ld* l,int elem){
  ld* tmp=l;
  int i=0;
  int p=busca(l,elem);
  if(p==0){
    return 0;
  }else{
    for ( i = 0; i < p; i++) {
      tmp=tmp->sig;
    }
    tmp->ant->sig=tmp-> sig;
    free(tmp);
    return 1;
  }
}
void despliga(ld* l){
  ld * tmp=l;
  int i=0;
  printf("\nContenido de la lista: \n");
   do{
    printf("%d:%c->%d\n",i,tmp->c,tmp->i);
    i++;
      tmp=tmp->sig;

  }while (tmp->sig!=NULL);
  printf("%d:%c->%d\n",i+1,tmp->c,tmp->i);
}
int contar(ld* l){
  int i=1;
  ld * tmp=l;
  printf("\nContenido de la lista: \n");
   do{
    i++;

      tmp=tmp->sig;

  }while (tmp->sig!=NULL);
  return i+1;
}
void aMatriz(ld*l,char * m) {
  int tam=contar(l);
  char matriz[tam];
  int i=0;
  ld * tmp=l;
   do{
     matriz[i]=tmp->c;
     i++;
    tmp=tmp->sig;

  }while (tmp->sig!=NULL);
  matriz[i+1]=tmp->c;
  m=&matriz[0];
}
void freMatriz(ld*l,int * m) {
  int tam=contar(l);
  int matriz[tam];
  int i=0;
  ld * tmp=l;
   do{
     matriz[i]=tmp->i;
     i++;
    tmp=tmp->sig;

  }while (tmp->sig!=NULL);
  matriz[i+1]=tmp->c;
  m=&matriz[0];
}
