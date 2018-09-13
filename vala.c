#include <stdio.h>
#include <stdlib.h>

struct No{
    int numero;
    struct No *esquerda;
    struct No *direita;
};
typedef struct No No;

void insercao (No **pRaiz, int numero2){
    if (*pRaiz==NULL)
    {
        *Raiz=(No *)malloc(sizeof(No));
        (*pRaiz) -> esquerda=NULL;
        (*pRaiz) -> direita=NULL;
        (*pRaiz) -> numero=numero2;
    }
    else
    { if (numero2 <((*pRaiz)->numero))
    {
        insercao(&((*pRaiz)->direita),numero2);
    }

    }
}
void exibirEmOrdem(No *pRaiz){
    if(pRaiz != NULL){
        exibirEmOrdem(pRaiz->Esquerda);
        printf("\n%i",pRaiz->numero);
        exibirEmOrdem(pRaiz->direita);
    }
}
void exibirPreOrdem(No *pRaiz){
    if(pRaiz != NULL){
        printf("\n%d",pRaiz->numero);
        exibirPreOrdem(pRaiz->esquerda);
        exibirPreOrdem(pRaiz->direita);
    }
}

void exibirPosOrdem(No *pRaiz){
    if(pRaiz != NULL){
        exibirPosOrdem(pRaiz->esquerda);
        exibirPosOrdem(pRaiz->direita);
        printf("\n%i",pRaiz->numero);
    }
}
int main(void){



    return 0;
}
