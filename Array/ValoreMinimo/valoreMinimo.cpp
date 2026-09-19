// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main) 

int main() {

    // Dichiarazione variabile per valore minimo

    int min = 9999;
    int i;

    // Dichiarazione e inizializzazione array

    int list[] = {-12,-7,-4,3,8,19};

    // Ciclo per scorrere tutti gli elementi dell'array

    cout << "Valori dell'array: \n\t";

    for (i = 0; i < 6; i++) {

        // Stampa valori

        cout << list[i] << " ";

        // Cerca il valore minimo nell'array

        if (list[i] < min) {

            // Assegnazione del valore alla variabile min

            min = list[i];

        }

    }

    // Stampa del valore minimo
    
    cout << "\n\nValore minimo dell'array: " << min;
    return 0;

}