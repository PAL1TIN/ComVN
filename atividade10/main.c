#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int num;
        float saldo;
        char nome[20];
}Conta;



int main(){
    int i,j = 0, op, posi, achou, num_conta;
    float menor_saldo;
    char nome_cliente[20];

    Conta conta[15];

    for(i = 0; i<15; i++){
        conta[i].num = 0;
        conta[i].nome[20] = "";
        conta[i].saldo = 0;
    }
    posi = 1;

    do{
        printf("Menu de opcoes:\n");
        printf("1 - Cadastrar contas\n");
        printf("2 - Visualizar todas as contas de determindo cliente\n");
        printf("3 - Excluir conta de menor saldo\n");
        printf("4 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &op);

        if(op < 1 && op > 4){
            printf("Opcao invalida");
        }else{



                if(op == 1){
                    if(posi > 15){
                        printf("Todas as contas ja foram cadastradas\n");

                    }else{
                        achou = 0;
                        printf("Digite o numero da conta a ser incluida: ");
                        scanf("%d", &num_conta);

                        for(i = 1; i < posi; i++){
                            if(num_conta == conta[i].num){
                                achou = 1;
                            }

                        }
                        if(achou == 1){
                            printf("Ja existe conta com esse numero\n");
                        }else{
                            conta[posi].num = num_conta;
                            printf("Digite o nome do cliente: ");
                            scanf("%s", &conta[posi].nome);
                            printf("Digite o saldo do cliente: ");
                            scanf("%f", &conta[posi].saldo);
                            printf("Conta cadastrada com sucesso\n\n");
                            posi++;
                            }

                    }


                }

                if(op == 2){
                    printf("Digite o nome do cliente a ser consultado: ");
                    scanf("%s", &nome_cliente[20]);
                    achou = 0;
                    for(i = 1; i< posi; i++){
                        if(strcmp(nome_cliente, conta[i].nome)){
                            printf("Conta:%d\n", conta[i].num);
                            printf("saldo:%.2f\n", conta[i].saldo);
                            printf("\n");
                            achou = 1;
                            break;
                        }

                    }
                    if(achou == 0){
                        printf("Nao existe conta cadastrada para esse cliente\n\n");
                    }


                }
        }
        }while(op != 4);



    return 0;
}
