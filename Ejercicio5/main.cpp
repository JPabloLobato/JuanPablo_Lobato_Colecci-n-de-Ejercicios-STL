#include <iostream>
#include <map>
#include <set>
#include <vector>

int main () {
    std::vector<int> miVector;
    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);
    std::cout << "Elementos del vector: ";
    for (int elemento: miVector) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    std::map<std::string, int> miMapa;
    miMapa["uno"] = 1;
    miMapa["dos"] = 2;
    miMapa["tres"] = 3;

    std::cout << "Elementos del mapa: ";
    for (const auto &par: miMapa) {
        std::cout << "{" << par.first << ": " << par.second << "}";
    }
    std::cout << std::endl;
    std::set<int> miSet;
    miSet.insert(5);
    miSet.insert(10);
    miSet.insert(5);
    std::cout << "Elementos del set: ";
    for (int elemento: miSet) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
    return 0;
}
