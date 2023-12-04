#include <iostream>
#include "ciencias.h"

using namespace std;

//main
int main() {

    cout << "Hello World cientifico!" << endl;

    cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << endl;

    return 0;
}