#ifndef EASYJSON_H_
#define EASYJSON_H_
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>
namespace easyjson{
    void save(nlohmann::json data,std::string file);
    nlohmann::json start(std::string file);
}
#endif