#include "TP_3_ALP_Gabriel-Guimaraes-dos-Santos-Ricardo_Lista.h"
#include <stdio.h>

void FiLaVazia(Lista *Lista){
    Lista->Primeiro = 0;
    Lista->Ultimo = Lista->Primeiro;
}

int EhVazia(Lista Lista){
    return (Lista.Ultimo == Lista.Primeiro);
}

void ColocaJogada(Jogada jogada, Lista *Lista){
    if (Lista->Ultimo == 9)
        printf("Lista esta cheia\n");
    else {
        Lista->vJogadas[Lista->Ultimo] = jogada;
        Lista->Ultimo++;
    }
}

void RetiranaFila(Lista *lista, Jogada *jogada){
    if (EhVazia(*lista)){
        printf(" Erro: Posicao nao existe\n");
        return;
    }
    *jogada= lista->vJogadas[lista->Primeiro];
    lista->Primeiro++;
}

int PesquisaJogada(Lista *lista, Jogada* pJogada){
    int i = 0;
    while(i<(lista->Ultimo)){
        if(lista->vJogadas[i].jogador == pJogada->jogador && lista->vJogadas[i].coluna == pJogada->coluna && lista->vJogadas[i].linha == pJogada->linha){
            return (i+1);
        }
        else{
            i++;
        }
    }
    return 0;
}