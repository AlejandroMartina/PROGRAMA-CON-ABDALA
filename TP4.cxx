#include <iostream>
#include <string>
using namespace std;

int calcularValorPalabra(string palabra) {
    int valor = 0;
    for (char letra : palabra) {
              switch (letra) {
      
                  case 'a':
                   case 'e':
        
                        valor += 1;
                break;
            case 'o':
            case 's':
         
               valor += 2;
                break;
            case 'd':
            case 'i':
            case 'n':
            case 'r':
               
                 valor += 3;
                break;
            case 'c':
            case 'l':
            case 't':
            case 'u':
         
                       valor += 4;
                break;
            case 'm':
            case 'p':
            
                    valor += 5;
                break;
            case 'b':
            case 'f':
            case 'g':
            case 'h':
            case 'j':
            case 'q':
            case 'v':
            case 'x':
            case 'y':
            case 'z':
            
            valor += 6;
                break;
            case 'k':
            case 'w':
               
                 valor += 7;
                break;
        }
    }
    return valor;
}

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    int valor = calcularValorPalabra(palabra);
    cout << "El valor de la palabra '" << palabra << "' es: " << valor << endl;

    return 0;
}
                