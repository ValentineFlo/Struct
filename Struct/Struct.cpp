// Struct.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

// memoire contigue
// contient plusieurs types
// pas de limite comme le tableau
// se limite au scope

struct voiture
{
    std::string model;
    std::string marque;
    unsigned int vitesseMax; // seulement positif
    float prix;
    int tab[3];
    int* ptr;

};


int main()
{
    int a = 12;
    //voiture mavoiture; // déclare la voiture comme un type et mavoiture comme une variable c une variable
    //mavoiture.model = "clio";
    //mavoiture.marque = "Renault";
    //mavoiture.vitesseMax = 250;
    //mavoiture.prix = 10000.f;

    // plus simple :
    voiture mavoiture("clio", "renault", 220, 15000.f, { 1, 2, 3 }, &a);


    std::cout << mavoiture.model << std::endl;
    std::cout << mavoiture.marque << std::endl;
    std::cout << mavoiture.vitesseMax << std::endl;
    std::cout << mavoiture.prix << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cout << mavoiture.tab[i] << std::endl;
    }

    std::cout << *(mavoiture.ptr) << std::endl;


    std::cout << "Hello World!\n";







    return 0;
}
