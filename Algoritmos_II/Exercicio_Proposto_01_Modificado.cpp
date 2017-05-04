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


// Função Principal
int main(int argc, char** argv[]){


string Cargo;
float Limite_Inferior;
float Limite_Superior;

int indice = 4; // 5 posições; diminui 1 para considerar o numero zero


// Leitura
for (int i = 0; i<=indice; i++){
cout << "Cadastro 0" << (i+1) << endl << endl;

cout << "Insira o Nome do Colaborador: ";
cin >> colaborador[i].nome;
cin.ignore(); // evitar que o buffer seja carregado na proxima entrada

cout << "Insira a Matricula: ";
cin >> colaborador[i].matricula;
cin.ignore();

cout << "Insira o Cargo: ";
cin >> colaborador[i].cargo;
cin.ignore();

cout << "Insira o Salario: ";
cin >> colaborador[i].salario;
cin.ignore();

system("cls"); // Limpar Tela via MS-DOS
}


// consulta de dados
while (Cargo.compare("sair") != 0){

cout << "Conculta de dados" << endl << endl;

cout << "Insira o Cargo: ";
cin >> Cargo;

cout << "Insira o Limite Inferior do Salario: ";
cin >> Limite_Inferior;

cout << "Insira o Limite Superior do Salario: ";
cin >> Limite_Superior;

cout << endl << endl;

for (int i = 0; i<=indice; i++){

if ((colaborador[i].cargo.compare(Cargo) == 0) && (colaborador[i].salario >= Limite_Inferior && colaborador[i].salario <= Limite_Superior))
{

cout << "Colaborador: " << colaborador[i].nome << endl;
cout << "Cargo: " << colaborador[i].cargo << endl;
cout << "Maticula: " << colaborador[i].matricula << endl;
cout << "Salario: " << colaborador[i].salario << endl << endl;


}

}

system("pause");
system("cls");

}
// FIM
system("pause>>null"); // Pausar via MS-DOS
return 0; // retorna ZERO para a função int main
}
