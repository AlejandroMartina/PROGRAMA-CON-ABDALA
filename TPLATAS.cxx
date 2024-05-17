#include <iostream>
#include <string>

using namespace std;

int main() {
    
    
    cout << "Ingresa la hilera de latas: ";
    string hilera_latas;
    getline(cin, hilera_latas);

    
    int total_latas = hilera_latas.length();
    int secuencia_actual = 0;
    int secuencia_maxima = 0;
    int secuencia_siguiente = 0;
    int distancia_entre_secuencias = 0;

   
    for (int i = 0; i < total_latas; i++) {
        
        
        if (hilera_latas[i] == 'G') {
        	secuencia_actual++;
            
            
            if (secuencia_actual > secuencia_maxima) {
                secuencia_maxima = secuencia_actual;
            }
        } else {
           
            if (secuencia_actual >= secuencia_siguiente) {
                secuencia_siguiente = secuencia_actual;
            }
            secuencia_actual = 0;
        }
    }
     if (secuencia_maxima == secuencia_siguiente) {
        secuencia_siguiente = 0;
    }

    
    distancia_entre_secuencias = secuencia_siguiente - secuencia_maxima;

    
    cout << "a) Total de latas en la hilera: " << total_latas << endl;
    cout << "b) Latas en la secuencia más larga: " << secuencia_maxima << endl;
    cout << "c) Latas en la secuencia siguiente: " << secuencia_siguiente << endl;
    cout << "d) Distancia entre las secuencias: " << distancia_entre_secuencias << endl;

    return 0;
}
