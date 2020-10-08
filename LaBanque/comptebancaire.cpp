#include <iostream>
#include "comptebancaire.h"

CompteBancaire::CompteBancaire()
{

}

CompteBancaire::CompteBancaire(float _solde):
    solde(_solde)
{
    //cout << "Constructeur de la classe CompteBancaire" << endl ;
}

CompteBancaire::~CompteBancaire()
{
    //cout << "Destructeur de la classe CompteBancaire" << endl ;
}

void CompteBancaire::Deposer(float montant)
{
    solde=solde+montant;
}

bool CompteBancaire::Retirer(float montant)
{   
    bool retour=false;
    if(montant>solde)
    {
        printf("fond insufisant");
    }else{
            solde=solde-montant;
        retour = true;
    }
    return retour;
}

float CompteBancaire::ConsulterSolde()
{
    return solde;
}
