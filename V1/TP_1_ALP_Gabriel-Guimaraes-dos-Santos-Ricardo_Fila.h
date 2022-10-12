#ifndef TP_1_ALP_GABRIEL_GUIMARAES_DOS_SANTOS_RICARDO_FILA_H
#define TP_1_ALP_GABRIEL_GUIMARAES_DOS_SANTOS_RICARDO_FILA_H
typedef int Apontador;

typedef struct Jogada_str{
    int jogador;
    int linha;
    int coluna;
} Jogada;

typedef struct{
    Jogada vJogadas[9];
    Apontador iFrente, iTras;
}Fila;

void CriaFilaVazia(Fila* pFila);
int FilaEhVazia(Fila* pFila);
int InsereJogada(Fila* pFila, Jogada* pItem);
int RemoveJogada(Fila* pFila, Jogada* pItem);

#endif //TP_1_ALP_GABRIEL_GUIMARAES_DOS_SANTOS_RICARDO_FILA_H
