#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {  
    char descricao[100];
    float valor;
    char mes[15];
    int ano;
} Despesas;

void incluirDespesa(Despesas vetorDespesas[MAX], int *totalDespesas){
    /* Confere se ja cadastrou o maximo de despesas que o vetor aguenta */
    if (*totalDespesas == MAX){
        printf("Cadastro cheio.\n");
        return;
    }
    /* Recebe o valor da descricao e depois compara a descricao atual com todas as 
    descricoes presentes no vetor pra ver se ela e igual a alguma outra */
    printf("Digite a descricao da sua despesa: \n");
    scanf(" %[^\n]", vetorDespesas[*totalDespesas].descricao);
    for(int i = 0; i < *totalDespesas; i++){
        int comparacao = strcmp(vetorDespesas[*totalDespesas].descricao, vetorDespesas[i].descricao);
        if (comparacao == 0){
            printf("A descricao nao pode ser igual a de outra despesa.\n");
            return;
        }
    }
    printf("Digite o valor da sua despesa: \n");
    scanf("%f", &vetorDespesas[*totalDespesas].valor);
    getchar();
    printf("Digite o mes da sua despesa: \n");
    scanf(" %[^\n]", vetorDespesas[*totalDespesas].mes);
    printf("Digite o ano da sua despesa: \n");
    scanf("%d", &vetorDespesas[*totalDespesas].ano);
    getchar();
    /* Adiciona mais um no total de despesas ja cadastradas, o ponteiro altera o valor na main */
    (*totalDespesas)++;
    printf("Despesa incluida com sucesso.\n");
}

/* Pesquisa uma despesa pela descricao e exibe seus dados */
void pesquisarDespesa(Despesas vetorDespesas[MAX], int totalDespesas){
    char despesaTemporaria[100];
    printf("Digite a descricao da despesa que voce quer pesquisar: \n");
    scanf(" %[^\n]", despesaTemporaria);
    for(int i = 0; i < totalDespesas; i++){
        if(strcmp(despesaTemporaria, vetorDespesas[i].descricao) == 0){
            printf("Descricao : %s\n", vetorDespesas[i].descricao);
            printf("Valor : %.2f\n", vetorDespesas[i].valor);
            printf("Mes : %s\n", vetorDespesas[i].mes);
            printf("Ano : %d\n", vetorDespesas[i].ano);
            return;
        }
    }
    printf("Despesa nao encontrada.\n");
}

/* Lista todas as despesas cadastradas */
void listarDespesas(Despesas vetorDespesas[MAX], int totalDespesas){
    if(totalDespesas == 0){
        printf("Nenhuma despesa foi encontrada.\n");
        return;
    }
    for(int i = 0; i < totalDespesas; i++){
        printf("\n--- Despesa %d ---\n", i + 1);
        printf("Descricao : %s\n", vetorDespesas[i].descricao);
        printf("Valor : %.2f\n", vetorDespesas[i].valor);
        printf("Mes : %s\n", vetorDespesas[i].mes);
        printf("Ano : %d\n", vetorDespesas[i].ano);
    }
}

/* Pesquisa uma despesa pela descricao e permite alterar seus dados, exceto a descricao */
void alterarDespesa(Despesas vetorDespesas[MAX], int totalDespesas){
    char despesaTemporaria[100];
    printf("Digite a descricao da despesa que voce quer alterar: \n");
    scanf(" %[^\n]", despesaTemporaria);
    for(int i = 0; i < totalDespesas; i++){
        if(strcmp(despesaTemporaria, vetorDespesas[i].descricao) == 0){
            printf("Descricao : %s\n", vetorDespesas[i].descricao);
            printf("Valor : %.2f\n", vetorDespesas[i].valor);
            printf("Mes : %s\n", vetorDespesas[i].mes);
            printf("Ano : %d\n", vetorDespesas[i].ano);

            printf("Digite o novo valor da sua despesa: \n");
            scanf("%f", &vetorDespesas[i].valor);
            getchar();
            printf("Digite o novo mes da sua despesa: \n");
            scanf(" %[^\n]", vetorDespesas[i].mes);
            printf("Digite o novo ano da sua despesa: \n");
            scanf("%d", &vetorDespesas[i].ano);
            getchar();
            printf("Despesa alterada com sucesso.\n");
            return;
        }
    }
    printf("Despesa nao encontrada.\n");
}

/* Pesquisa uma despesa pela descricao, exibe seus dados e solicita confirmacao para excluir */
void excluirDespesa(Despesas Despesas[MAX], int *totalDespesas){
    char despesaTemporaria[100];
    int resposta;
    printf("Digite a descricao da despesa que voce quer excluir: \n");
    scanf(" %[^\n]", despesaTemporaria);
    for(int i = 0; i < *totalDespesas; i++){
        if(strcmp(despesaTemporaria, Despesas[i].descricao) == 0){
            printf("Descricao : %s\n", Despesas[i].descricao);
            printf("Valor : %.2f\n", Despesas[i].valor);
            printf("Mes : %s\n", Despesas[i].mes);
            printf("Ano : %d\n", Despesas[i].ano);
            
            printf("Voce deseja excluir essa despesa? (1 - SIM | 0 - NAO): \n");
            scanf("%d", &resposta);
            if (resposta == 1){
                for (int j = i; j < *totalDespesas - 1; j++){
                    Despesas[j] = Despesas[j + 1];
                }
                (*totalDespesas)--;
                printf("Despesa excluida com sucesso.\n");
                return;
            }
            else if (resposta == 0){
                printf("Operacao cancelada.\n");
                return;
            }
            else{
                printf("Escolha uma opcao valida.\n");
                return;
            }
        }
    }
    printf("Despesa nao encontrada.\n");
}

void main() {
    Despesas vetorDespesas[MAX];
    int totalDespesas = 0;
    int opcao;

    do {
        printf("\n=== CADASTRO DE DESPESAS ===\n");
        printf("1 - Incluir despesa\n");
        printf("2 - Pesquisar despesa\n");
        printf("3 - Listar despesas\n");
        printf("4 - Alterar despesa\n");
        printf("5 - Excluir despesa\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: incluirDespesa(vetorDespesas, &totalDespesas); break;
            case 2: pesquisarDespesa(vetorDespesas, totalDespesas); break;
            case 3: listarDespesas(vetorDespesas, totalDespesas); break;
            case 4: alterarDespesa(vetorDespesas, totalDespesas); break;
            case 5: excluirDespesa(vetorDespesas, &totalDespesas); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
}