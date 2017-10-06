#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipo_agenda{

    char nome[50];
    char telefone[9];
};
struct tipo_agenda *Agenda;


void cadastro();

main(){

char *nomes[500] = {"Carlos Vilela", "Ana Batista", "Rodrigo Maia", "Carlos Igor", "Zaira Fernandes", "Bartolomeu Rodrigues", "Augusto Jose"};
int i;
for (i = 0; i<=(strlen(*nomes)); i++){

    printf("%s\n",nomes[i]);
}

ordenar(&nomes);
printf("\n\nOrdenada\n\n");
for (i = 0; i<=(strlen(*nomes)); i++){

    printf("%s\n",nomes[i]);
}



//opcoes();

}

void opcoes(){

    char opt;

    system("cls");

    while (1){

   system("cls");

            printf("\n================================================================================\n");
            printf("||                              AGENDA APS2                                   ||");
            printf("\n================================================================================\n");

            printf("\n1 - Inserir Contatos");
            printf("\n2 - Remover Contatos");
            printf("\n3 - Listar Contatos");
            printf("\n4 - Buscar Contatos");
            printf("\nF - Fechar Agenda");


            printf("\n\n\n Informe a Opcao desejada: ");


            opt = getche();

            switch(opt){

                case('1'):
                    inserir();
                break;

                case('2'):

                break;

                case('3'):

                break;

                case('4'):

                break;

                case('F'):
                case('f'):
                    exit(0);
                break;

                default:

                    main();


            }

    }

}


void inserir (){

    Agenda = NULL;

    int flag = 1;
    char SN;
    int i = 0;

    system("cls");

    while(flag){

   system("cls");

        Agenda = (struct tipo_agenda*) realloc(Agenda, (i+1)*sizeof(struct tipo_agenda));

        if (Agenda!=NULL){

            printf("\n================================================================================\n");
            printf("||                       CADASTRO DE CONTATOS - AGENDA                        ||");
            printf("\n================================================================================\n");

            printf("\nInsira o nome: ");
            gets(Agenda[i].nome);

            printf("Insira o Telefone: ");
            gets(Agenda[i].telefone);

            printf("\n\nPressione F para finalizar ou qualquer tecla para continuar o cadastro: ");
            SN = getche();

            if (SN=='f' || SN=='F'){
                flag = 0;
            }else{
            system("cls");
            system("cls");

            }

            i++;
        }

    }


}

void ordenar (char **nome){

int total = (strlen(nome));

char *aux;

int i;
int j;


for(i = 0; i<=total;i++){
    for(j = 0; j<=total; j++){

        if (nome[i] > nome[j]){
                aux = nome[i];
                nome[i] = nome[j];
                nome[j] = aux;

        }


    }
}




}
