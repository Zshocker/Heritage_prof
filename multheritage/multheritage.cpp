// multheritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"VehiculeAerienne.h"
#include "VehiculeTerrestre.h"
#include "VoitureVolante.h"
#include"A.h"
#include "B.h"
int main()
{

 
 //  Vehicule* v = new Vehicule(5);
  //VehiculeAerienne* A = new VehiculeAerienne(4, 5);

   // std::cout << sizeof(*v) << std::endl;
 //   std::cout << sizeof(*A) << std::endl;

   //VehiculeAerienne* A = new VehiculeAerienne(2); 
  //std:: cout << sizeof(*A) << std::endl;

   // VehiculeTerrestre* T = new VehiculeTerrestre(3);
   // std::cout << sizeof(*T) << std::endl;
   Vehicule* V = new VoitureVolante(3,4, 2, 3);

   //std::cout << sizeof(*V) << std::endl;

    V->print();
    //delete A; 
    //delete T;
   // delete V;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
