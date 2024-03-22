#include <iostream>
#include <string>

using namespace std;

int ContarLetraA(string f) {
    int count = 0;
    for(int i = 0; i < f.size(); i++) {
        char c = tolower(f[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string frase;
    cout << "Por favor, ingrese una frase: ";
    getline(cin, frase);
    int numA = ContarLetraA(frase);
    cout << "La frase tiene " << numA << " A." << endl;
    return 0;
}