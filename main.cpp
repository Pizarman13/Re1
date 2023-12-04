#include <iostream>

using namespace std;

 namespace Matematicas {
        int suma(int a, int b) {
            return a + b;
        }
        int resta(int a, int b) {
            return a - b;
        }
        int multiplicacion(int a, int b) {
            return a * b;
        }
    }


//main
int main() {

    cout << "Hello World!" << endl;

    cout << "Suma: " << Matematicas::suma(5, 3) << endl;
    cout << "Resta: " << Matematicas::resta(5, 3) << endl;
    cout << "Multiplicacion: " << Matematicas::multiplicacion(5, 3) << endl;
    return 0;

    
    return 0;
}