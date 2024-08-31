#include <stdio.h>
#include <stdlib.h>


typedef struct lista{

struct lista *prox;
int info;

}Lista;



Lista* inicializa (void){ //inicializa a lista zerando
                        //todos os valores
    return NULL;
}

Lista* insere (Lista* l, int i){ //funcao que insere elementos na lista

    Lista* novo = (Lista*) malloc(sizeof(Lista)); //aloca memoria para a lista
    novo -> info = i; //adicionando um valor a lista
    novo -> prox = l; //
    return novo;

}

void imprime(Lista* l){ //funcao para imprimir o valor existente na lista

Lista* p; //criando o ponteiro do tipo lista
  for(p = l; p != NULL; p = p -> prox){ //percorrendo a lista
  printf("info = %d\n", p -> info); //mostrar os valores
}
}

int vazia(Lista* l){
 if(l == NULL){
    return 1;
 }else{
 return 0;
 }
}

Lista* busca(Lista* l, int v){

Lista* p;
for(p = l; p != NULL; p = p -> prox){
        if(p -> info == v){
            return p;
        }return NULL;
}
}

Lista* retira (Lista* l, int v) {
Lista* ant = NULL;
Lista* p = l;

while (p != NULL && p->info != v) {
    ant = p;
    p = p->prox;
}
if (p == NULL){
    return l;
}
if (ant == NULL) {
    l = p->prox;
}
else {
    ant->prox = p->prox;
}
free(p);
return l;
}


void libera (Lista* l)
{
Lista* p = l;

while (p != NULL) {
    Lista* t = p->prox;
    free(p);
    p = t;
}
}

