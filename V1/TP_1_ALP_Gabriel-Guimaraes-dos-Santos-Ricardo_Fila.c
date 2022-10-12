#include "TP_1_ALP_Gabriel-Guimaraes-dos-Santos-Ricardo_Fila.h"

void CriaFilaVazia(Fila* pFila)
{
    pFila->iFrente = 0;
    pFila->iTras = pFila->iFrente;
}

int FilaEhVazia(Fila* pFila)
{
    return (pFila->iFrente == pFila->iTras);
}

int InsereJogada(Fila* pFila, Jogada* pJogada){
    if (((pFila->iTras+1)%(9)) == pFila->iFrente)
        return 0; /* fila cheia */
    pFila->vJogadas[pFila->iTras] = *pJogada;
    pFila->iTras = (pFila->iTras + 1) % (9);
    return 1;
}

int RemoveJogada(Fila* pFila,  Jogada* pJogada){
    if (FilaEhVazia(pFila))
        return 0;

    *pJogada = pFila->vJogadas[pFila->iFrente];
    pFila->iFrente = (pFila->iFrente + 1) % (9);
    return 1;
}

int PesquisaJogada(Fila *pFila, Jogada* pJogada){
    int i = 0;
    while(i<(pFila->iTras)){
        if(pFila->vJogadas[i].jogador == pJogada->jogador && pFila->vJogadas[i].coluna == pJogada->coluna && pFila->vJogadas[i].linha == pJogada->linha){
            return (i+1);
        }
        else{
            i++;
        }
    }
    return 0;
}


