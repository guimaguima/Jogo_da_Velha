#include "TP_2_ALP_Gabriel-Guimaraes-dos-Santos-Ricardo_Pilha.h"
#include <stdio.h>

void CriaPilhaVazia(Pilha *pilha){
    pilha->Topo = 0;
}

int PilhaEhVazia(Pilha *pilha){
    return (pilha->Topo==0);
}

void Empilhar(Jogada jogada, Pilha *pilha)
{
    if (pilha->Topo == 9)
        printf("Pilha esta cheia\n");
    else
    {
        pilha->vJogadas[pilha->Topo] = jogada;
        pilha->Topo++;
    }
}

void Desempilha(Jogada *jogada,Pilha *pilha)
{
    if (PilhaEhVazia(pilha))
        printf(" Erro pilha esta vazia\n");
    else
    {
        pilha->Topo--;
        *jogada = pilha->vJogadas[pilha->Topo];
    }
}

int PesquisaNaPilha(Pilha *pilha, Jogada* pJogada){
    int i = 0;
    while(i<(pilha->Topo)){
        if(pilha->vJogadas[i].jogador == pJogada->jogador && pilha->vJogadas[i].coluna == pJogada->coluna && pilha->vJogadas[i].linha == pJogada->linha){
            return (i+1);
        }
        else{
            i++;
        }
    }
    return 0;
}