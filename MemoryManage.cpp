//
// Created by Edgar Chaves on 20/4/18.
//

#include "MemoryManage.h"
#include "ListaSimple.h"
#include "NodoSimple.h"

int referencias;
int posicion;
int *memory;
int MemoryManage::TomarMemoria(int espacio) {
     memory = new int (espacio);
    referencias = espacio;


}
template <typename TIPONODO>

ListaSimple MemoryManage::AsiganorMemoria(ListaSimple listaSimple) {
    NodoSimple<TIPONODO> *temp = listaSimple.primeroPtr;
    while(temp != nullptr){
        referencias --;
        temp->setNumeroEnMemoria(memory[posicion]);
        posicion++;
    }
    return listaSimple;

}

bool MemoryManage::MemoriaLLena(int referencia) {
    if (referencia != nullptr) {
        return true;
    }else {
        return false;
    }
}
