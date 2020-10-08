#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "comptebancaire.h"


class CompteEpargne : public CompteBancaire
{
protected:
    float tauxInterets;

public:
    CompteEpargne();
    CompteEpargne(float solde, float tauxInterets);
    ~CompteEpargne();
    void CalculerInterets(float solde, float tauxInterets);
    void ModifierTaux(float tauxInterets);
};

#endif // COMPTEEPARGNE_H
