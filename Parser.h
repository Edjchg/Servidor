//
// Created by Edgar Chaves on 20/4/18.
//

#ifndef SERVIDOR_PARSER_H
#define SERVIDOR_PARSER_H

#include "json.hpp"
#include "ListaSimple.h"

using json = nlohmann::json;

class Parser {
public:
    ListaSimple<std::string> convertToObject(json );
    ListaSimple<string> StringToJson(string);

    json toJson(string objetoJson);
};


#endif //SERVIDOR_PARSER_H
