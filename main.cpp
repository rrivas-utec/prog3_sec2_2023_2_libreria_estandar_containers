#include <iostream>
#include <map>
#include <set>
using namespace std;

void ejemplo_mapas() {
    // Creacion del mapas
    map<string, int> mp1;
    map<string, int> mp2 = {{"A", 10},
                            {"B", 20},
                            {"C", 30},
                            {"A", 40}};

    // Insertar valores
    auto res1 = mp1.insert({"D", 50});
    auto it = res1.first;
    cout << boolalpha << it->first << ":" << it->second << " " << res1.second << endl;
    auto res2 = mp1.insert({"D", 150});
    it = res2.first;
    cout << boolalpha << it->first << ":" << it->second << " " << res2.second << endl;
    // Modificar
    mp1["D"] = 80;
    cout << mp1["D"] << endl;
    cout << mp1["Z"] << endl; // Genera el key de Z
    auto it3 = mp1.find("X");
    if (it3 != end(mp1)) { // Verificar si el iterador es valido
        cout << it3->second << endl;
    }
    else
        cout << "Key incorrecto\n";

    for (auto it = begin(mp1); it != end(mp1); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    for (auto& item: mp1) {
        cout << item.first << " " << item.second << endl;
    }
}

int main() {
    ejemplo_mapas();
    return 0;
}
