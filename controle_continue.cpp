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


using namespace std;

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
