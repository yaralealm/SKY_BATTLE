
#include <stdbool.h>
#include "modulo.h"

typedef struct nave* Nave;

void criar_Nave(int tamanho);
int adicionar_Modulo(Modulo* modulo);
remover_Modulo(int indice);
int vida_total_Soma(??);
bool verificar_Destruicao(bool tao_inteiros);

Nave criarNave(int modulos);
void destroyNave(Nave nave);
bool inserirMod(Nave nave, int vida);
int getInfoAt(Nave nave, int position);
bool isEmptyNave(Nave nave);
