#include <stdio.h>

//autores: khauan henrique e vinicius santos

typedef struct{

 int num_avi;
 char nome;

}Reserva;

 int main(void) {

   Reserva reservas[60];
   int avi[4], lug[4];
   int i,posl,op,achou,num,pos;
   char nome;

    for(i=0;i<4;i++){
     avi[i] = 0;
     lug[i] = 0;
   }

  for(i = 1; i <= 4; i++){
    reservas[i].num_avi = 0;
    reservas[i].nome = "\0";
  }
     posl = 1;

  do{

    printf("\n 1 - Cadastrar o n�mero dos avioes");
    printf("\n 2 - Cadastrar o n�mero de lugares dispon�veis em cada aviao");
    printf("\n 3 - Reservar passagem");
    printf("\n 4 - Consultar por aviao");
    printf("\n 5 - Consultar por passageiro");
    printf("\n 6 - Finalizar");
    printf("\n Digite a op��o desejada: ");
     scanf("%d", &op);

    if(op == 1){
      for(i = 1; i <= 4; i++){

   printf("\n Digite o numero do %d aviao: ",i);
    scanf("%d", &avi[i]);

      }
    }
    if(op == 2){
      for(i = 1; i <= 4; i++){
        printf("\n Digite o numero de lugares dispon�veis no %d aviao: ",i);
        scanf("%d", &lug[i]);
      }
    }
    if(op == 3){
      printf("\n Digite o numero do aviao no qual deseja efetuar a reserva: ");
       scanf("%d", &num);
      for(i = 1; i <= 4; i++){
        if(posl > 60){
          printf("\n Nao ha mais lugares dispon�veis para a reserva");
        }else{
          achou = 0;
            for(i =1; i <= 4; i++){
              if(num == avi[i]){
                achou = 1;
                pos = i;
              }
            }
          if(achou == 0){
            printf("\n Aviao nao cadastrado");
          }else if(lug[pos] = 0){
              printf("aviao lotado");
          }else{
            printf("\n Digite o nome do passageiro: ");
             scanf("%s", &reservas[posl].nome);
            reservas[posl].num_avi = num;
            reservas[posl].nome  = nome;
            printf("Reserva efetuada com sucesso");
            posl++;
            lug[pos]--;
          }
        }
      }
      if(op == 4){
        printf("\n Digite o nmero do aviao para consultar as reservas: ");
         scanf("%d", &num);
        achou = 0;
      for(i = 1; i <= 4; i++){
        if(num == avi[i]){
          achou = 1;
        }
        if(achou == 0){
          printf("\n Avi�o n�o esxite");
        }else{
          achou = 0;
          for(i = 1; i <= 4; i++){
            if(num == reservas[i].num_avi){
              printf("%s", reservas[i].nome);
              achou = 1;

            }
          }
          if(achou == 0){
            printf("\n Nenhuma reserva esta cadastrada para este aviao");

          }
        }
        if(op == 5){
          printf("\n Digite o nome do passageiro para consultar as reservas: ");
           scanf("%s", &nome);
          achou = 0;
          for(i = 1; i<=posl ;posl --){
            if(nome == reservas[i].nome){
              printf("%d", reservas[i].num_avi);
              achou = 1;
            }
          }
          if(achou == 0){
            printf("\n Nenhuma reserva esta cadastrada para este nome");
          }
        }
    }
      }
    }
  }while(op != 6);

  return 0;
}
