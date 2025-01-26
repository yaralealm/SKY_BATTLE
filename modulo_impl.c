#include <stdbool.h>
#include <stdlib.h>
#include "modulo.h"


struct mod {
    int vida;
    Nave *navePtr; 
}

//O Módulo contém uma variável que guarda um valor inteiro e um ponteiro para a struct Nave.

Modulo criarMod(){
Nave mod;
mod = malloc(sizeof(struct mod));

if (mod != NULL)
{
    mod->vida = 100; 
}

return mod;
}

void atribuir_Vida(int vida){
Modulo mod;
if(mod != NULL){
mod->vida = vida;
    }
} 


void reduzir_Vida(int dano){
Modulo mod;
mod-> vida = vida;
if(vida > 0) {
vida =- dano;
    }
}

bool verificar_Integridade(){
Modulo mod;
bool ta_inteiro = false;

    if(mod->vida > 0){
        ta_inteiro = true;
    }
    return ta_inteiro;
}

void setNext(Modulo mod, Modulo prox){
    Modulo mod; 
    if(mod != NULL){
        mod->prox = prox;
    }
}

int getVida(Modulo mod){
    Modulo mod;
    if(mod != NULL){
        return mod->v;
    }
        return NULL;
    }

Nave getNext(Nave mod) {
    Modulo mod;
    if(mod != NULL) {
        return mod->prox;
    }
return NULL;
}