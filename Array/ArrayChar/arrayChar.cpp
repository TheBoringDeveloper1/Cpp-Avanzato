// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main) 

int main() {

    // Dichiarazione e inizializzazione dell'array e della variabile ciclo

    int i = 0;
    char colore[] = "rosso";

    // Stampa dimensione array(in byte)

    cout << "L'array colore occupa " << sizeof(colore) << " byte\n";

    cout << "\nGli elementi dell'array sono: \n\t";

    // Ciclo elementi array

    while (colore[i] != '\0') {

        // Stampa elementi
        
        cout << colore[i] << " ";
        i++;

    }

}