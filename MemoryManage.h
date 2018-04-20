//
// Created by Edgar Chaves on 20/4/18.
//

#ifndef SERVIDOR_MEMORYMANAGE_H
#define SERVIDOR_MEMORYMANAGE_H

#include "ListaSimple.h"
class MemoryManage {

public:

    MemoryManage();





    int TomarMemoria(int espacio);

    ListaSimple AsiganorMemoria(ListaSimple );

    bool MemoriaLLena(int referencia);





    int memoria;


};


#endif //SERVIDOR_MEMORYMANAGE_H
