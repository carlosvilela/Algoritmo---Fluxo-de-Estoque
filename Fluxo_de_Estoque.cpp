//Fluxo_de_Estoque.cpp : IDE Microsoft Visual Studio 2013 - Linguagem C++.


/** Bibliotecas **/
#include "stdafx.h" // biblioteca da IDE Visual Studio
#include <string> // biblioteca C++ que permite o comando String (cadeia de caracteres)
#include <iostream> // biblioteca C++ para usar cout (Escrever) e cin (Ler);
#include <cstdlib> // biblioteca C para usar o comando system;


/** Uso do Espaço de Nomes Standard (std) para estruturas, funções, constantes **/
using namespace std; //para os comandos string, cout, cin

/** Estrutura Estoque com ponteiros **/
struct Estoque {

public:
	int *id;
	float *quantidade, *valor_unitario;
	string *descricao;

public:
	void inicializar_ponteiros(void); // inicializa o alocamento dos ponteiros

};
// criar nome de acesso a estrutura Estoque
struct Estoque apontar_Estoque, *Cadastro;

void Estoque::inicializar_ponteiros(void) {
	// possivel inserir 10 itens (0 a 9)
	id = (int*)malloc(sizeof(int[9])); // aloca ponteiro com malloc
	quantidade = (float*)malloc(sizeof(float[9]));
	valor_unitario = (float*)malloc(sizeof(float[9]));
	descricao = new string[10]; // aloca com new, pois não é possivel usar o malloc com o ponteiro string

}

/** Estrutura Sistema_Inicializar

Esta estrutura inicializa alocando memória ao ponteiro Estrutura Estoque
e verifica os erros de alocação de memória aos ponteiros

**/
struct Sistema_Inicializar {

public:
	void Inicializar(void); // inicializa ponteiro e Verifica erros dos Ponteiros
	void limpar_ponteiros(void); // Limpa a memória dos ponteiros ára reutilizar
	void Finalizar(void); // Finaliza o programa

private:
	void verificar_erros_ponteiros_Cadastro(void); // Verifica erros nos ponteiros
} Sistema;


void Sistema_Inicializar::Inicializar(void) {

	Cadastro = (struct Estoque *) malloc(sizeof(struct Estoque));
	Cadastro = &apontar_Estoque;

	if (Cadastro == NULL){

		cout << endl << "ERRO 01h - Problemas nos ponteiros Estrutura Estoque";
		cout << endl << "O Programa devera ser fechado" << endl;
		cout << endl << "Pressione ENTER para finalizar" << endl;
		system("pause>null"); // pause>null é nulo de texto

		exit(0);
	}

	Cadastro->inicializar_ponteiros();

	Sistema.verificar_erros_ponteiros_Cadastro();

}


void Sistema_Inicializar::limpar_ponteiros(void) {

	Cadastro->id = NULL;
	free(Cadastro->id); // desaloca ponteiro com free pois iniciou com malloc

	Cadastro->quantidade = NULL;
	free(Cadastro->quantidade);

	Cadastro->valor_unitario = NULL;
	free(Cadastro->valor_unitario);

	Cadastro->descricao = NULL;
	delete[] Cadastro->descricao; // desaloca ponteiro com delete pois iniciou com new

	Cadastro = NULL;
	free(Cadastro);


}

void Sistema_Inicializar::verificar_erros_ponteiros_Cadastro(void) {

	if (Cadastro->id == NULL && Cadastro->quantidade == NULL && Cadastro->valor_unitario == NULL && Cadastro->descricao == NULL){

		cout << endl << "ERRO 02h - Problemas nos ponteiros Estrutura Estoque";
		cout << endl << "O Programa devera ser fechado" << endl;
		cout << endl << "Pressione ENTER para finalizar" << endl;
		system("pause>null"); // pause>null é nulo de texto

		exit(0);

	}
}

void Sistema_Inicializar::Finalizar(void) {

	Sistema.limpar_ponteiros();

	exit(0);
}


static int num_produtos = 10; // quantidade de produtos diferentes a ser lido é 10 conforme algoritmo



void Exibir_Produtos_Cadastrados(void); // declara função. a atribuição está abaixo da função principal int main ()

// atribuir instruções a função Exibir
void Exibir_Produtos_Cadastrados(void){

	system("cls");

	cout << endl << "==============================================================================";
	cout << endl << "=                            FLUXO DE ESTOQUE                                =";
	cout << endl << "==============================================================================";
	cout << endl;

	int i = 0;
	//num_produtos está definido fora da função

	for (i = 0; i <= (num_produtos - 1); i++){ // para (i <= 9) faça

		cout << "| Codigo: " << Cadastro->id[i] << " | Descricao: " << Cadastro->descricao[i];
		cout << " | Quantidade: " << Cadastro->quantidade[i] << " | Valor: " << Cadastro->valor_unitario[i] << endl;
	}

	cout << "------------------------------------------------------------------------------" << endl;

}

/**
FUNÇÂO PRINCIPAL MAIN
**/


int main(int argc, char** argv[]){

	Sistema.Inicializar();

	int i; // declara variável

	i = 0; // atribui valor a variável; i = 0;

	int *codg; // cria ponteiro, será usado para achar o iten que deseja alterar

	//num_produtos está definido fora da função


	/** Cadastra os produtos no estoque **/

	while (i <= (num_produtos - 1)) { // Enquanto (*i <= 9) faça


		system("cls");

		cout << endl << "==============================================================================";
		cout << endl << "=                            FLUXO DE ESTOQUE                                =";
		cout << endl << "=                          Cadastro de Produtos                              =";
		cout << endl << "==============================================================================";
		cout << endl << endl;


		cout << "Insira o Codigo do Produto " << (i + 1) << ": "; // Escreva "insira código: ";
		cin >> Cadastro->id[i]; // Leia codigo;
		cin.ignore(); // soluciona problema de pular para proxima leitura, limpa o \n do buffer gerado na entrada anterior ao pressionar enter

		cout << endl <<"Insira a Descricao do Produto " << (i + 1) << ": "; // Escreva "insira descrição: ";
		getline(cin, Cadastro->descricao[i]); // Leia descricao; - aceita espaços

		cout << endl << "Insira a Quantidade do Produto " << (i + 1) << ": "; // Escreva "insira quantidade: ";
		cin >> Cadastro->quantidade[i]; // Leia quantidade;

		cout << endl <<"Insira o Valor unitario do Produto " << (i + 1) << ": "; // Escreva "insira valor unitario: ";
		cin >> Cadastro->valor_unitario[i]; // Leia valor_unitario;

		system("cls"); // limpar tela

		i++; // i++;

	}

	/**
	realiza as operações: Incluir e Retirar produtos do Estoque
	sempre fazendo a leitura do tipo de operação desejada: "I" ou "R",
	Inclusão ou Retirada. Quando for digitada uma operação diferente dessas duas, a repetição deve finalizar.
	**/

	char *opcao; // caractere opcao; - está fora do while, pois não precisa ser declarado a cada loop


	while (1) { // Enquanto (infinito) faça

		Exibir_Produtos_Cadastrados(); // exite produtos cadastrados

		opcao = (char*)malloc(sizeof(char)); // aloca ponteiro

		cout << "Digite I para Incluir, R para retirar Quantidade do estoque (I/R): ";
		cin >> *opcao; // Ler opcao;

		switch (*opcao){

		case ('i') : // se ( opcao == 'i' ou opcao == 'I')  então
		case ('I') :

				   codg = (int*)malloc(sizeof(int)); // aloca ponteiro
			*codg = 0;

			cout << endl << endl << "Insira o Codigo do Produto: ";
			cin >> *codg;

			for (i = 0; i <= (num_produtos - 1); i++){ 

				if (*codg == Cadastro->id[i]){ // verifica onde está o produtos

					int quant; quant = 0; // interessante fazer ponteiro
					
					cout << endl << "Produto: " << Cadastro->descricao[i] << endl;

					cout << endl << "Insira a quantidade de produtos que deseja Incluir: ";
					cin >> quant; // insere valor a variavel

					Cadastro->quantidade[i] = Cadastro->quantidade[i] + quant; // soma quantidade ao produto

				}

			}

			break;

		case ('r') : // senão se ( opcao == 'r' ou opcao == 'R') então
		case ('R') :




				   codg = (int*)malloc(sizeof(int)); // aloca ponteiro
			*codg = 0;

			cout << endl << endl << "Insira o Codigo do Produto: ";
			cin >> *codg;

			for (i = 0; i <= (num_produtos - 1); i++){ 

				if (*codg == Cadastro->id[i]){ // verifica onde está o produtos

					int quant; quant = 0; // interessante fazer ponteiro

					cout << endl << "Produto: " << Cadastro->descricao[i] << endl;

					cout << endl << "Insira a quantidade de produtos que deseja Retirar: ";
					cin >> quant; // insere valor a variavel

					if (quant > Cadastro->quantidade[i]){

						cout << endl << endl << "Estoque Insuficiente ...";

						system("pause>null");
					}
					else {

						Cadastro->quantidade[i] = Cadastro->quantidade[i] - quant; // soma quantidade ao produto
					}
				}

			}


			break; // fimSe;

		default:

			system("cls"); // limpa tela

			Exibir_Produtos_Cadastrados(); // exite produtos cadastrados


			int total_estoque = 0; 
			float valor_total_estoque = 0;
			for (i = 0; i <= (num_produtos - 1); i++){ // calcula quantidade total em estoque

				total_estoque = (int) total_estoque + Cadastro->quantidade[i];
				valor_total_estoque = valor_total_estoque + Cadastro->valor_unitario[i];
			}
			cout << endl << "Quantidade Total em Estoque: " << total_estoque;// exibe Quantidade em estoque
			cout << endl << "Valor Total em Estoque: " << valor_total_estoque;// exibe Valor em estoque


			cout << endl << endl << "Pressione ENTER para finalizar programa" << endl;
			system("pause>null");

			Sistema.Finalizar(); // finaliza programa com segurança

			break;// fimSe;

		}

		opcao = NULL; // anula ponteiro
		free(opcao); // desaloca ponteiro da memória

	}


	/** FIM ALGORITMO **/

	cout << endl << endl << "Pressione ENTER para finalizar o programa...";
	system("pause>null");

	Sistema.Finalizar(); // finaliza programa com segurança

	return 0;
}

