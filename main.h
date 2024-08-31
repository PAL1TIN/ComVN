struct{

struct lista *prox;
int info;

};
typedef struct lista Lista;

Lista* inicializa();
Lista* insere(Lista* l, int i);
void imprime(Lista* l);
int vazia(Lista* l);
Lista* busca(Lista* l, int v);
Lista* retira(Lista* l, int v);
void libera(Lista* l);
