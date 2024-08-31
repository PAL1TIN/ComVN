#include <stdio.h>
#include <stdlib.h>
#include "main.h"


struct{

struct lista *prox;
int info;

};
typedef struct lista Lista; //cria a estrutura lista
















int main()
{
    Lista* l;

    l = inicializa();
    l = insere(l, 23);
    l = insere(l, 45);
    l = insere(l, 56);
    l = insere(l, 78);

    imprime(l);
    printf("--------------\n");
    l = retira(l, 78);
    imprime(l);
    printf("--------------\n");
    l = retira(l, 45);
    imprime(l);
    libera(l);

    return 0;
}
