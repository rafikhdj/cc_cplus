//
//  Personne.h
//  Controle_Continue_cplus
//
//  Created by hadjadj rafik on 22/05/2023.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef Personne_h
#define Personne_h

class Personne {
private:
  string nom;
  string prenom;
  string dateDeNaissance;

public:
  Personne(string nom, string prenom, string dateDeNaissance) {
    this->nom = nom;
    this->prenom = prenom;
    this->dateDeNaissance = dateDeNaissance;
  }

  void Afficher() {
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "Prénom: " << prenom << std::endl;
    std::cout << "Date de naissance: " << dateDeNaissance << std::endl;
  }
};


#endif /* Personne_h */
