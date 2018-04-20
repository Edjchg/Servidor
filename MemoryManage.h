//
// Created by Edgar Chaves on 20/4/18.
//

#ifndef SERVIDOR_MEMORYMANAGE_H
#define SERVIDOR_MEMORYMANAGE_H


class MemoryManage {

public:
public:
    static MemoryManage& Instancia();

    MemoryManage(const MemoryManage&) =             delete;

    MemoryManage& operator = (const MemoryManage&)= delete;

    int TomarMemoria(int espacio);

    bool MemoriaLLena(int referencia);



private:
    MemoryManage ();
    int memoria;


};


#endif //SERVIDOR_MEMORYMANAGE_H
