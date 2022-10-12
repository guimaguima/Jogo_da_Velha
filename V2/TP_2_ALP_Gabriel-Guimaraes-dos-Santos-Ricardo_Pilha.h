#ifndef TP_2_ALP_GABRIEL_GUIMARAES_DOS_SANTOS_RICARDO_PILHA_H
#define TP_2_ALP_GABRIEL_GUIMARAES_DOS_SANTOS_RICARDO_PILHA_H

typedef int Apontador;

typedef struct Jogada_str{
    int jogador;
    int linha;
    int coluna;
} Jogada;

typedef struct{
    Jogada vJogadas[9];
    Apontador Topo;
}Pilha;

void CriaPilhaVazia(Pilha *pilha);
void Empilhar(Jogada jogada, Pilha *pilha);
void Desempilha(Jogada *jogada,Pilha *pilha);
int PilhaEhVazia(Pilha *pilha);
int PesquisaNaPilha(Pilha *pilha, Jogada* pJogada);
#endif //TP_2_ALP_GABRIEL_GUIMARAES_DOS_SANTOS_RICARDO_PILHA_H
