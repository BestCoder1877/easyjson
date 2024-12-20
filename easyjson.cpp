#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>



using json = nlohmann::json;

namespace easyjson{



    void save(json data,std::string file){
        std::ofstream o(file);
        o<<std::setw(4)<<data<<std::endl;
    };


    json start(std::string file){
        std::ifstream f(file);
        
        return json::parse(f);
    }
}
