// Diretivas
#include <iostream> // usar comandos de entrada e saida
#include <string> // usar tipo de dados string
#include <cstdlib> // usar o comando system

//usando a estrutura padrão std
using namespace std;

// Estrutura Tabela com Array.
struct registro01{

string nome;
string matricula;
string cargo;
float salario;


} colaborador[5]; // uma posição a mais para evitar problemas de buffer


// Estrutura Tabela de Funcoes
class registro02{

public:

static const int indice = 4; // 5 posições; diminui 1 para considerar o numero zero

// Função Leitura
void Leitura (void); // para facilitar, o X significa a quantidade de registro de deseja, limitado a 100

// Função Busca
void Busca (string Cargo, float Limite_Inferior, float Limite_Superior);

} funcao;

// Funções do Registro02

void registro02::Leitura (void){


for (int i = 0; i<=indice; i++){
cout << "Cadastro 0" << (i+1) << endl << endl;

cout << "Insira o Nome do Colaborador: ";
cin >> colaborador[i].nome;
cin.ignore(); // evitar que o buffer seja carregado na proxima entrada

cout << "Insira a Matricula: ";
cin >> colaborador[i].matricula;
cin.ignore(); // evitar que o buffer seja carregado na proxima entrada

cout << "Insira o Cargo: ";
cin >> colaborador[i].cargo;
cin.ignore(); // evitar que o buffer seja carregado na proxima entrada

cout << "Insira o Salario: ";
cin >> colaborador[i].salario;
cin.ignore(); // evitar que o buffer seja carregado na proxima entrada

system("cls"); // Limpar Tela via MS-DOS
}

}

void registro02::Busca (string Cargo, float Limite_Inferior, float Limite_Superior){


for (int i = 0; i<=indice; i++){

if ((colaborador[i].cargo.compare(Cargo) == 0) && (colaborador[i].salario >= Limite_Inferior && colaborador[i].salario <= Limite_Superior))
{

cout << "Colaborador: " << colaborador[i].nome << endl;
cout << "Cargo: " << colaborador[i].cargo << endl;
cout << "Maticula: " << colaborador[i].matricula << endl;
cout << "Salario: " << colaborador[i].salario << endl << endl;


}

}
}


// Função Principal
int main(int argc, char** argv[]){


string Cargo;
float Lim_Inf;
float Lim_Sup;

funcao.Leitura();


while (Cargo.compare("sair") != 0){
cout << "Conculta de dados" << endl << endl;

cout << "Insira o Cargo: ";
cin >> Cargo;

cout << "Insira o Limite Inferior do Salario: ";
cin >> Lim_Inf;

cout << "Insira o Limite Superior do Salario: ";
cin >> Lim_Sup;

cout << endl << endl;

funcao.Busca(Cargo,Lim_Inf,Lim_Sup);

system("pause>>null");
system("cls");

}
// FIM
system("pause>>null"); // Pausar via MS-DOS
return 0; // retorna ZERO para a função int main
}
