// Heritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"GeoPoint.h"
#include "SematicPoint.h"
#include "Hotel.h"
using namespace GeoMap;
using namespace std;
int main()
{
	GeoPoint *P =new GeoPoint(0.0, 0.0, 2); 
   // P->print(); // objet de la casse mere 
	SematicPoint* casaPort = new SematicPoint(1.2, 2.2, 3, "gare");

	GeoPoint* pr = &*casaPort;
	//pr->SematicPoint::print(); // erreur
	pr->print();
	//Hotel* ibis = new Hotel(1.2,2.2,3,"Hotel","ibis",100);
	//casaPort->print();
	//casaPort->GeoPoint::print();  // objet de la classe fille
	//casaPort = P; // erreur impossible
    // P=casaPort; // ok 
	//P->print(); 
	// ibis->print();
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
