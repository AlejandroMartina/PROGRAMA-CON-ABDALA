#include <iostream>
#include <string>

using namespace std;

bool esVocal(char letra) {
    return (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == ' ');
}

string insertarUEntreConsonantes(const string& palabra) {
    string palabra_con_u;
    for (size_t i = 0; i < palabra.size(); ++i) {
        palabra_con_u += palabra[i];
        if (( !esVocal(palabra[i]) && !esVocal(palabra[i + 1])) || ( !esVocal(palabra[i]) && palabra[i + 1] == ' ')) {
            palabra_con_u += 'u';
        }
    }
    return palabra_con_u;
}

int main() {
    string palabra;
    cout << "Ingrese una palabra: "<<"Konnichiwa, ";
    getline(cin, palabra); 

    cout << "Palabra con U entre consonantes: " << insertarUEntreConsonantes(palabra) << endl;

    return 0;
}