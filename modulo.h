#include <stdbool.h>
#include "nave.h"

typedef struct mod* Modulo;

Modulo criarMod();
void atribuir_Vida(int vida);
void reduzir_Vida(int dano);
bool verificar_Integridade();