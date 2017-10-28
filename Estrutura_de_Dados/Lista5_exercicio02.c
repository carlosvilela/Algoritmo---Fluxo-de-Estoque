#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento {
 int chave;
 struct Elemento *prox;
} Elemento;

struct Elemento *p, *prim, *h, *q;
int i;

main(){
    system("cls");
    prim = NULL;

    p = (Elemento*) malloc(sizeof(Elemento));

    h = p;

    p->chave = 1;

    for (i = 1; i<=3; i++){

        q = (Elemento*) malloc(sizeof(Elemento));
        q->chave = p->chave+2;
        printf("%d , %d, %d\n", h->chave, p->chave, q->chave);
        p->prox = q;
    }

    printf("\n\n ->> %d, %d, %d\n", h->chave, p->chave, q->chave);

}
