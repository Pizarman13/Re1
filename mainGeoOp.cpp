
#include <iostream>
#include "triangulo.h"
#include "circulo.h"

using namespace std;

//main
int main() {

    cout << "Hello World!" << endl;

    cout << "Area del circulo: " << Geometria::calcularAreaCirculo(5) << endl;
    cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << endl;

    return 0;
}