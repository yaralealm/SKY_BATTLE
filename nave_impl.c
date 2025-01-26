#include <stdbool.h>
#include "nave.h"
#define MAXSIZE 50



struct nave {
    int vida_Total; 
    int modulos;
    Modulo primeiro; 
};

Nave criarNave(int tamanho){
    Nave nave; 
    nave = malloc(sizeof(struct nave));
    nave->modulos = tamanho; 
}

int adicionar_Modulo(Nave nave, int vida){
    Nave nave;
    nave = criarMod(); 
    if(nave != NULL){
        mod->vida = vida; 
    }


}

void remover_Modulo(Nave nave, int indice){

}

int retorno_VidaTotal(){

}

bool verificar_Destruicao(){

}