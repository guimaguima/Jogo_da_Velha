#ifndef TP_3_ALP_GABRIEL_GUIMARAES_DOS_SANTOS_RICARDO_LISTA_H
#define TP_3_ALP_GABRIEL_GUIMARAES_DOS_SANTOS_RICARDO_LISTA_H
typedef int Apontador;

typedef struct Jogada_str{
    int jogador;
    int linha;
    int coluna;
} Jogada;

typedef struct{
    Jogada vJogadas[9];
    Apontador Primeiro, Ultimo;
}Lista;

void RetiranaFila(Lista *lista, Jogada *jogada);
void ColocaJogada(Jogada jogada, Lista *Lista);
int EhVazia(Lista Lista);
void FiLaVazia(Lista *Lista);
#endif //TP_3_ALP_GABRIEL_GUIMARAES_DOS_SANTOS_RICARDO_LISTA_H
