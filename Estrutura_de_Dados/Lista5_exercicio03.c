#include <cstdlib>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

typedef struct Elemento {
 int chave;
 string vet[3];
 struct Elemento *prox;
} Elemento;

struct Elemento *p, *prim, *h, *q;
int i;

main(){
    system("cls");
    prim = NULL;

    p = new Elemento;

    h = p;

    p->chave = 1;

    p->vet[0] = "Ana";
    p->vet[1] = "Bia";
    p->vet[2] = "Lia";

    cout << p->vet[0] <<endl;
    cout << p->vet[1] <<endl;
    cout << p->vet[2] <<endl;

    cout <<endl;


    for(i = 0; i<=3; i++){

            q = new Elemento;

            q->vet[0] = p->vet[0]+"."+p->vet[0][2-i];
            q->vet[1] = p->vet[1]+"."+p->vet[1][2-i];
            q->vet[2] = p->vet[2]+"."+p->vet[2][2-i];

            cout << p->vet[0] <<endl;
            cout << p->vet[1] <<endl;
            cout << p->vet[2] <<endl;

            cout <<endl;

            p = q;
    }

}
