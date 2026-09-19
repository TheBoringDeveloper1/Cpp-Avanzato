// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabile per valore massimo

    int max = -9999;
    int i;

    // Dichiarazione e inizializzazione array

    int list[] = {-9,-5,2,6,12,15};

    // Ciclo per scorrere tutti gli elementi dell'array

    cout << "Valori dell'array: \n\t";

    for (i = 0; i < 6; i++) {

        // Stampa valori

        cout << list[i] << " ";

        // Cerca il valore massimo nell'array

        if (list[i] > max) {

            // Assegnazione del valore alla variabile max

            max = list[i];

        }

    }

    // Stampa del valore massimo
    
    cout << "\n\nValore massimo dell'array: " << max;
    return 0;

}