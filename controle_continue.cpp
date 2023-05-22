//
//  main.cpp
//  Controle_Continue_cplus
//
//  Created by hadjadj rafik on 22/05/2023.
//


/*  **********************************
 #########  Exercice 1 :
 
 - Encapsulation
 - Heritage
 - Polymorphisme
 - Abstarction
 
 #########  Exercice 2 :
 
 La grande différence entre struct et class est le fait que les attributs de la structure sont par défaut public alors que dans la classe les attributs peuvents soit être public ou privés

*/
//
//


#include <iostream>
#include <string>
#include "Personne.h"
#include "Chef.h"
#include "Employe.h"
#include "Directeur.h"


using namespace std;


int main() {
  Personne personnes[5] = {
      Personne("Rafik", "HADJADJ", "29/08/1992"),
      Personne("Jane", "Smith", "02/02/1995"),
      Employe("Bob", "Johnson", "03/03/1985", 2500.0),
      Employe("Alice", "Williams", "04/04/1992", 3000.0),
      Directeur("Hamid", "Brown", "05/05/1980", 5000.0, "R&D", "Google")
  };

  for (int i = 0; i < 5; i++) {
    std::cout << "Personne " << (i + 1) << ":" << std::endl;
    personnes[i].Afficher();
    std::cout << std::endl;
  }

  return 0;
}
