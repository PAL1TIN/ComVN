typedef struct ponto{
  float x;
  float y;
}Ponto;
Ponto* pto_cria(float x, float y);
void pto_libera(Ponto* p);
void pto_acessa(Ponto* p, float x, float y);
void pto_atribui(Ponto* p, float x, float y);
void pto_distancia(Ponto* p1, Ponto* p2);
Ponto* pto_soma(Ponto* p1, Ponto* p2); 
Ponto* pto_subtrai(Ponto* p1, Ponto* p2);