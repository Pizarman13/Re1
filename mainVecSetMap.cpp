#include <vector>
#include <map>
#include <set>
#include <iostream>

using namespace std;

int main() {
    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    // Map
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad["Maria"] = 30;
    edad["Pedro"] = 20;
    edad.erase("Juan");

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);

    cout << "Vector: ";
    for (const auto& num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Mapa: ";
    for (const auto& edad : edad) {
        cout << "(" << edad.first << ", " << edad.second << ") ";
    }
    cout << endl;

    cout << "Conjunto: ";
    for (const auto& elem : conjunto) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
