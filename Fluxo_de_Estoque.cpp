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


void Exibir_Produtos_Cadastrados(void); // declara função. a atribuição está abaixo da função principal int main ()


/**

DESTA PARTE EM DIANTE É O ALGORITMO PROPRIAMENTE DITO

SERÁ EXECUTADO CONFORME EXERCICIO PROPOSTO


**/

static int num_produtos = 10; // quantidade de produtos diferentes a ser lido é 10 conforme algoritmo

int main(int argc, char** argv[]){

	Sistema.Inicializar();

	/** INICIO ALGORITMO **/

	/*
	Passo 1 - Fazer a leitura de produtos para colocar no estoque.
	As informações de cada produto são um código numérico, uma descrição,
	quantidade de itens e o valor unitário de cada item.
	Deverão ser lidos 10 produtos diferentes;
	*/

	int i; // declara variável

	//i = (int*)malloc(sizeof(int));

	i = 0; // atribui valor a variável; i = 0;

	int *codg; // cria ponteiro, será usado para achar o iten que deseja alterar

	//num_produtos está definido  acima do main, fora de funções, para poder ser usado em todo o programa e ter facilidade para definir seu valor

	while (i <= (num_produtos-1)) { // Enquanto (*i <= 9) faça


		system("cls");

		cout << endl << "==============================================================================";
		cout << endl << "=                                                                            =";
		cout << endl << "=                            FLUXO DE ESTOQUE                                =";
		cout << endl << "=                          Cadastro de Produtos                              =";
		cout << endl << "==============================================================================";
		cout << endl << endl << endl;


		cout << "Insira o Codigo do Produto " << (i + 1) << ": "; // Escreva "insira código: ";
		cin >> Cadastro->id[i]; // Leia codigo;

		cout << endl << endl << "Insira a Descricao do Produto " << (i + 1) << ": "; // Escreva "insira descrição: ";
		cin.ignore(); // soluciona problema de pular para proxima leitura, limpa o \n do buffer gerado na entrada anterior ao pressionar enter
		getline(cin, Cadastro->descricao[i]); // Leia descricao; - aceita espaços - (tente usar no máximo 28 caracteres para não ficar muito grande)

		cout << endl << endl << "Insira a Quantidade do Produto " << (i + 1) << ": "; // Escreva "insira quantidade: ";
		cin >> Cadastro->quantidade[i]; // Leia quantidade;

		cout << endl << endl << "Insira o Valor unitario do Produto " << (i + 1) << ": "; // Escreva "insira valor unitario: ";
		cin >> Cadastro->valor_unitario[i]; // Leia valor_unitario;

		system("cls"); // limpar tela

		i++; // i++;

	}

	/*
	Passo 2 - A partir da leitura inicial, poderão ser realizadas as seguintes operações:

	- Inclusão de novos itens no estoque, para produtos já cadastrados anteriormente no primeiro passo.
	Nesse momento basta que seja lido o código do produto e quantos itens deseja-se inserir. Após isso,
	atualizar a quantidade de itens no estoque.

	- Retirada de tens no estoque. Nesse momento basta que seja lido o código do produto e quantos itens deseja-se retirar.
	Caso a quantidade a ser retirada for maior do que atual em estoque, deve ser dada uma mensagem dizendo
	"Estoque Insuficiente". Caso contrário atualizar a quantidade em estoque.

	As operações do passo 2 serão realizados dentro de uma estrutura de repetição,
	sempre fazendo a leitura do tipo de operação desejada: "I" ou "R",
	Inclusão ou Retirada. Quando for digitada uma operação diferente dessas duas, a repetição deve finalizar.
	*/

	char *opcao; // caractere opcao; - está fora do while, pois não precisa ser declarado a cada loop


	while (1) { // Enquanto (infinito) faça

		Exibir_Produtos_Cadastrados(); // exite produtos cadastrados

		//char *opcao; // caractere opcao; - está fora do while, pois não precisa ser declarado a cada loop
		opcao = (char*)malloc(sizeof(char)); // aloca ponteiro, muito util para nao haver vazamento de memória - o alocamento é realizado a cada loop, pois é desalocado sempre no final do bloco afim de liberar memória

		cout << "Digite I para Incluir, R para retirar Quantidade do estoque (I/R): ";
		cin >> *opcao; // Ler opcao;

		switch (*opcao){ 

		case ('i') : // se ( opcao == 'i' ou opcao == 'I')  então
		case ('I') :

				   codg = (int*)malloc(sizeof(int)); // aloca ponteiro, este ponteiro está no inicio da função principal main()
			*codg = 0;

			// é necessário que faça o teste para saber se a alocação do ponteiro está correta, se o ponteiro retornar NULL pode dar um erro grave e/ou fechar o programa de forma inesperada
			// fiz esse teste em alguns ponteiros, não em todos, mas se fosse um programa profissional deve obrigatoriamente realizar os testes em todos os ponteiro. 

			cout << endl << endl << "Insira o Codigo do Produto: ";
			cin >> *codg;

			for (i = 0; i <= (num_produtos - 1); i++){ // este i está sendo usado varias vezes, é interessante que seja modificado para ser ponteiro afim de evitar vazamento de memória
				
				if (*codg == Cadastro->id[i]){ // verifica onde está o produtos

					int quant; quant = 0; // interessante fazer ponteiro

					cout << endl << "Insira a quantidade de produtos que deseja Incluir: ";
					cin >> quant; // insere valor a variavel

					Cadastro->quantidade[i] = Cadastro->quantidade[i] + quant; // soma quantidade ao produto

				}
			
			}

				   break;  

		case ('r') : // senão se ( opcao == 'r' ou opcao == 'R') então
		case ('R') :




				   codg = (int*)malloc(sizeof(int)); // aloca ponteiro, este ponteiro está no inicio da função principal main()
			*codg = 0;

			// é necessário que faça o teste para saber se a alocação do ponteiro está correta, se o ponteiro retornar NULL pode dar um erro grave e/ou fechar o programa de forma inesperada
			// fiz esse teste em alguns ponteiros, não em todos, mas se fosse um programa profissional deve obrigatoriamente realizar os testes em todos os ponteiro. 

			cout << endl << endl << "Insira o Codigo do Produto: ";
			cin >> *codg;

			for (i = 0; i <= (num_produtos - 1); i++){ // este i está sendo usado varias vezes, é interessante que seja modificado para ser ponteiro afim de evitar vazamento de memória

				if (*codg == Cadastro->id[i]){ // verifica onde está o produtos

					int quant; quant = 0; // interessante fazer ponteiro

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


			int total_estoque = 0; // não precisa ser ponteiro, pois não terá um uso significativo ao ponto de correr risco de vazamento de memória
			for (i = 0; i <= (num_produtos-1); i++){ // calcula quantidade total em estoque

				total_estoque = total_estoque + Cadastro->quantidade[i];
			}
			cout << endl << "Total em Estoque: " << total_estoque;// exite valor em estoque


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

// atribuir instruções a função Exibir
void Exibir_Produtos_Cadastrados(void){

	system("cls");

	cout << endl << "==============================================================================";
	cout << endl << "=                            FLUXO DE ESTOQUE                                =";
	cout << endl << "==============================================================================";
	cout << endl;

	int i;
	//num_produtos está definido  acima do main, fora de funções, para poder ser usado em todo o programa e ter facilidade para definir seu valor

	for (i = 0; i <= (num_produtos-1); i++){ // para (i <= 9) faça

		cout << endl << "< Codigo > " << Cadastro->id[i] << " < Descricao > " << Cadastro->descricao[i] << " <Quantidade> " << Cadastro->quantidade[i] << endl;
	}

	cout << "------------------------------------------------------------------------------"<< endl;

}
