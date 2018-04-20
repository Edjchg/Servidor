//
// Created by Edgar Chaves on 20/4/18.
//


#include "Parser.h"
#include "json.hpp"
#include "ListaSimple.h"
using json = nlohmann::json;

ListaSimple listaSimple;

void Parser::convertToObject(json objeto){

    struct nodo {
        std::string tipo;
        std::string etiqueta;
        std::string valor ;
        std::string referencias;
        std::string espacio;
    };
    for (int posicion = 0; posicion < sizeof(objeto); posicion++){
        listaSimple.insertarFinal(objeto["tipo"].get<std::string>(),objeto["etiqueta"]..get<std::string>(),
                objeto["valor"].get<std::string>(),"",objeto["espacio"]..get<std::string>());
    }


}