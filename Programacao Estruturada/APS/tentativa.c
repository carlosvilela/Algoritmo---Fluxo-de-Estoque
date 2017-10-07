#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct tipo_busca{
    char nome[50];
    char telefone[10];
}Contato;

static Contato *Agenda;

static int tamanhoAgenda;


void cadastrar();
void carregarVetorAgenda();
void gravarVetorAgenda();
void opicoesInicio();
void remover();
void listar();
void buscar();


main(){


opicoesInicio();




}

//=========================================================================

void cadastrar(){

    char *nome = NULL;
    char *telefone = NULL;

    nome = (char *) malloc(sizeof(char));
    telefone = (char *) malloc(sizeof(char));

    int flag = 1;
    char F;

    while(flag){

            system("cls");

            printf("================================================================================\n");
            printf("||                     INSERIR CONTATOS - AGENDA APS                          ||\n");
            printf("================================================================================\n\n");

            nome = (char *) realloc(nome,sizeof(char));
            telefone = (char *) realloc(nome,sizeof(char));
            if (nome==NULL || telefone==NULL){ printf("\nErro nos ponteiros\n"); exit(0);}


            FILE *arquivoNome = fopen("nome.txt", "a");

            if (arquivoNome==0){ printf("\nErro ao acessar arquivo NOME\n"); exit(0);}

            printf("Insira o Nome: ");
            gets(nome);
            strcat(nome,"\n");
            fputs(nome,arquivoNome);

            fclose(arquivoNome);

            FILE *arquivoTelefone = fopen("telefone.txt", "a");

            if (arquivoTelefone==0){ printf("\nErro ao acessar arquivo TELEFONE\n"); exit(0);}

            printf("Insira o Telefone: ");
            gets(telefone);
            strcat(telefone,"\n");
            fputs(telefone,arquivoTelefone);

            fclose(arquivoTelefone);


            printf("\n\nPressione F para fechar ou qualquer tecla para continuar ...");
            F = getch();

            switch(F){

                case('F'):
                case('f'):
                        carregarVetorAgenda();
                        flag = 0;
                break;

            }


    }

}

//-------------------------------------------------------------------------


//=========================================================================

void carregarVetorAgenda(){

    tamanhoAgenda = 0;

        Agenda = NULL;
        Agenda = (Contato *) malloc(sizeof(Contato));
        if (Agenda==NULL){ printf("\nErro ao acessar Ponteiro Agenda\n"); exit(0);}

        FILE *arquivoNome = fopen("nome.txt", "r");
        if (arquivoNome==0){ printf("\nErro ao acessar arquivo NOME\n"); exit(0);}

        int maxNome = 50;
        int i = 0;
        while( !feof(arquivoNome) ){

        Agenda = (Contato *) realloc(Agenda,maxNome*sizeof(Contato));
        if (Agenda==NULL){ printf("\nErro ao acessar Ponteiro Agenda\n"); exit(0);}


               fgets(Agenda[i].nome, maxNome, arquivoNome);

                i++;
                tamanhoAgenda++;
        }

        fclose(arquivoNome);


        FILE *arquivoTelefone = fopen("telefone.txt", "r");
        if (arquivoTelefone==0){ printf("\nErro ao acessar arquivo NOME\n"); exit(0);}

        int maxTelefone = 10;
        i = 0;
        while( !feof(arquivoTelefone) ){

        Agenda = (Contato *) realloc(Agenda,maxNome*sizeof(Contato));
        if (Agenda==NULL){ printf("\nErro ao acessar Ponteiro Agenda\n"); exit(0);}


               fgets(Agenda[i].telefone, maxTelefone, arquivoTelefone);

                i++;
        }

        fclose(arquivoTelefone);
}

//-------------------------------------------------------------------------


//=========================================================================

void gravarVetorAgenda(){

FILE *arquivoNome = fopen("nome.txt", "w");
if (arquivoNome==0){ printf("\nErro ao acessar arquivo NOME\n"); exit(0);}

int i;

for(i = 0; i<= tamanhoAgenda; i++){

fputs(Agenda[i].nome, arquivoNome);

}

fclose(arquivoNome);




FILE *arquivoTelefone = fopen("telefone.txt", "w");
if (arquivoTelefone==0){ printf("\nErro ao acessar arquivo Telefone\n"); exit(0);}


for(i = 0; i<= tamanhoAgenda; i++){

fputs(Agenda[i].telefone, arquivoTelefone);

}

fclose(arquivoTelefone);


}

//-------------------------------------------------------------------------

//=========================================================================

void opicoesInicio(){

    char opt;

    while(1){

            system("cls");

            printf("================================================================================\n");
            printf("||                         AGENDA APS                                         ||\n");
            printf("================================================================================\n\n");

            printf("1 - Inserir Contatos\n");
            printf("2 - Remover Contatos\n");
            printf("3 - Listar Contatos\n");
            printf("4 - Buscar Contatos\n");
            printf("F - Fechar Agenda\n\n");


            opt = getch();


            switch(opt){

                    case('1'):
                        cadastrar();
                    break;

                    case('2'):
                        remover();
                    break;

                    case('3'):
                        listar();
                    break;


                    case('4'):
                        //buscar();
                    break;



                    case('F'):
                    case('f'):
                        exit(0);
                    break;
            }



    }
}
//-------------------------------------------------------------------------

//=========================================================================

void remover(){

    carregarVetorAgenda();

    int i, j;
    int comparar;
    char nomeX[50];
    char nomeW[50];


    while(1){

           system("cls");

            printf("================================================================================\n");
            printf("||                     REMOVER CONTATO - AGENDA APS                           ||\n");
            printf("================================================================================\n\n");

            printf("Insira o nome do contato a ser removido: ");
            gets(nomeX);

            comparar = 0;

            for(i = 0; i<= tamanhoAgenda; i++){

                    strcpy(nomeW, Agenda[i].nome);

                    for(j = 0; j<= (strlen(nomeW)-1); j++){

                    if((nomeX[j]==nomeW[j])){
                            comparar++;
                    }



                    }

                    if (comparar == (strlen(nomeW)-1)){
                        printf("\nIndice: %d", i);

                        strcpy(Agenda[i].nome,"");
                        strcpy(Agenda[i].telefone,"");

                        gravarVetorAgenda();

                        getchar();
                        break;
                    }

            }
    }

}
//-------------------------------------------------------------------------

void listar (){

carregarVetorAgenda();


system("cls");

printf("================================================================================\n");
printf("||                   LISTA DE CONTATOS - AGENDA APS                           ||\n");
printf("================================================================================\n\n");


int i;
for(i = 0; i<= tamanhoAgenda; i++){

        printf("%s . %s\n", Agenda[i].nome, Agenda[i].telefone);

}

printf("\n\nPressione qualquer tecla para voltar ao menu inicial ...");
getchar();



}
