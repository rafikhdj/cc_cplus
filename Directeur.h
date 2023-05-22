//
//  Directeur.h
//  Controle_Continue_cplus
//
//  Created by hadjadj rafik on 22/05/2023.
//

#include <iostream>
#include <string>


#include "Chef.h"

using namespace std;

#ifndef Directeur_h
#define Directeur_h


class Directeur : public Chef {
private:
  string societe;

public:
  Directeur(string nom, string prenom, string dateDeNaissance, double salaire,
            string service, string societe)
      : Chef(nom, prenom, dateDeNaissance, salaire, service) {
    this->societe = societe;
  }

    void Afficher() {
      Chef::Afficher();
      std::cout << "Société: " << societe << std::endl;
    }
  };


#endif /* Directeur_h */
