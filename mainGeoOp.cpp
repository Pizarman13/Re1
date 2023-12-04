
#include <iostream>
#include "triangulo.h"
#include "circulo.h"

using namespace std;

//main
int main() {

    cout << "Hello World!" << endl;

    Geometria::Circulo c(5);
    
    cout << "Area del circulo: " << c.calcularAreaCirculo(5) << endl;
    cout << "Perimetro del circulo: " << c.calcularPerimetroCirculo(5) << endl;
    cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << endl;

    return 0;
}