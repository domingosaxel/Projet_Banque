#include "compteepargne.h"
#include <iostream>

CompteEpargne::CompteEpargne()
{

}

CompteEpargne::CompteEpargne(float _solde, float _tauxInterets):
    CompteBancaire(_solde),
    tauxInterets(_tauxInterets)
{
    //cout << "Constructeur de la classe CompteEpargne" << endl ;
}

CompteEpargne::~CompteEpargne()
{
    //cout << "Destructeur de la classe CompteEpargne" << endl ;
}

void CompteEpargne::CalculerInterets(float _solde, float _tauxInterets)
{
     solde=(_solde*(_tauxInterets/100));
     printf("Les interets sont de : %f euros",solde);
}

void CompteEpargne::ModifierTaux(float _tauxInterets)
{
    tauxInterets=_tauxInterets;
}
