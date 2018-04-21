#include <iostream>
#include "Servidor.h"
#include "string.h"
#include "MemoryManage.h"
/**
 * Funcion principal del servidor para iniciarlo.
 * @return
 */
 using namespace std;
int main() {

    int ** i= new int*[0];
    i[1] = new int (1);
    i[2] = new int (1);




    cout<< &i << endl;
    cout<< &i[1] << endl;








    std::cout << "Iniciando Servidor" << std::endl;
    Servidor servi=Servidor();
    servi.iniciar();

    return 0;
}

