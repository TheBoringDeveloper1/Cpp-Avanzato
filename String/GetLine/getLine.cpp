// Includo le direttive

#include <iostream>
#include <string>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili string utili al programma

    string nominativo;
    string indirizzo;

    string finale;

    // Intro programma

    string intro ("\nRiga di intestazione");
    cout << intro << endl << endl;

    // Inserimento nominativo

    cout << "   Scrivi nome e cognome: ";
    getline(cin,nominativo);

    // Inserimento indirizzo

    cout << "   Scrivi l'indirizzo: ";
    getline(cin,indirizzo);

    // Stampa finale dei dati
    
    finale = "\t" + nominativo + ", " + indirizzo;
    cout << endl << finale << endl;

}