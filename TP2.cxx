#include <iostream>
using namespace std;

int EstMayor(int a, int b, int c) {
    int mayor = a;
    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }
    return mayor;
}

int main() {
    int num1, num2, num3;
    
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    cout << "Ingresa el tercer número: ";
    cin >> num3;
    
    int resultado = EstMayor(num1, num2, num3);
    
    cout << "El número mayor es: " << resultado << endl;
    
    return 0;
}
