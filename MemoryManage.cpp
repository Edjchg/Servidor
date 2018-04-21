//
// Created by Edgar Chaves on 20/4/18.
//

#include "MemoryManage.h"
#include "ListaSimple.h"
#include "NodoSimple.h"



int MemoryManage::TomarMemoria(int espacio) {
    int referencias;
    int posicion;
    int **memory;

    referencias = espacio;



    return 0;
}
/*
template <typename TIPONODO>


 ListaSimple MemoryManage::AsiganorMemoria(ListaSimple<string> * listaSimple) {
    NodoSimple<TIPONODO> *temp = listaSimple->getPrimero();
    while(temp != nullptr){
        referencias --;
        if(temp->tipo == "char"){
            //memory[posicion] = new char[12];
            temp->setNumeroEnMemoria(memory[posicion]);
            posicion++;
        }
        temp->setNumeroEnMemoria(memory[posicion]);
        posicion++;
        temp = temp->siguientePtr;
    }
    return ListaSimple (*listaSimple);

}
*/
bool MemoryManage::MemoriaLLena(int referencia) {
    if (referencia != 0) {
        return true;
    }else {
        return false;
    }
}
