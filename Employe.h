//
//  Employe.h
//  Controle_Continue_cplus
//
//  Created by hadjadj rafik on 22/05/2023.
//

#include "Personne.h"

#include <iostream>
#include <string>
using namespace std;

#ifndef Employe_h
#define Employe_h

class Employe : public Personne {
private:
  double salaire;

public:
  Employe(string nom, string prenom, string dateDeNaissance, double salaire)
      : Personne(nom, prenom, dateDeNaissance) {
    this->salaire = salaire;
  }

  void Afficher() {
    Personne::Afficher();
      std::cout << "Salaire: " << salaire << std::endl;
  }
};



#endif /* Employe_h */
