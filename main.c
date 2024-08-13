#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nome[99];
    int num;
    float saldo;


}Conta;

void zerarconta(Conta conta[], int tam){
    for(int i = 0; i < tam; i++){
        strcpy(conta[i].nome, "");
        conta[i].num = 0;
        conta[i].saldo = 0;
    }
}

cadastrarconta(Conta conta[], int posi){
    int achou;
    printf("Digite o nome do cliente: ");
    scanf("%s", conta[posi].nome);
    printf("Digite o numero da conta: ");
    scanf("%d", &conta[posi].num);
    printf("Digite o saldo da conta: ");
    scanf("%f", &conta[posi].saldo);
    posi = posi + 1;
    printf("\n");
    return posi;

    }
visualizarcontas(Conta conta[], int tam){
    for(int i = 0; i < tam; i++){
        printf("Nome: %s\n", conta[i].nome);
        printf("Numero: %d\n", conta[i].num);
        printf("Saldo: %.2f\n", conta[i].saldo);
        printf("--------------------------\n");

    }
}

excluirContaMenorSaldo(Conta conta[], int tam){
    int pos_menor, achou;
    int menor_saldo = conta[0].saldo;
    for(int i = 0; i < tam; i++){
        if(conta[i].saldo < menor_saldo){
            menor_saldo = i;
            achou = i;

        }
    }
    for(int i = achou; i < tam; i++){
        conta[i ] = conta[i+1];
    }
    printf("Conta excluida com sucesso\n");
    tam = tam - 1;
}









int main()
{
    Conta conta[15];
    int i, op, posi = 0, achou, num_conta;
    float menor_saldo;
    char nome_cliente[99];

    zerarconta(conta ,15);



    do{
        printf("Menu de opcoes: ");
        printf("\n");
        printf("1 - Cadastrar conta\n");
        printf("2 - Visualizar todas as contas\n");
        printf("3 - Excluir conta com menor saldo\n");
        printf("4 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &op);
        if(op < 1 || op > 4){
            printf("Opcao invalida!\n");
        }else{
            switch(op){
                case 1:
                    if(posi > 15){
                        printf("Nao e possivel cadastrar mais contas\n");
                    }else{
                        posi = cadastrarconta(conta, posi);
                    }
                break;
                case 2:
                    visualizarcontas(conta, posi);
                break;
                case 3:
                    excluirContaMenorSaldo(conta, posi);

                break;




            }
        }
    }while(op != 4);

return 0;
}
