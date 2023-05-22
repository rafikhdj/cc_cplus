//
//  Chef.h
//  Controle_Continue_cplus
//
//  Created by hadjadj rafik on 22/05/2023.
//

#include "Employe.h"
#include <iostream>
#include <string>
using namespace std;

#ifndef Chef_h
#define Chef_h

class Chef : public Employe {
private:
  string service;

public:
  Chef(string nom, string prenom, string dateDeNaissance, double salaire,
       string service)
      : Employe(nom, prenom, dateDeNaissance, salaire) {
    this->service = service;
  }

  void Afficher() {
    Employe::Afficher();
      std::cout << "Service: " << service << std::endl;
  }
};


#endif /* Chef_h */
