#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H


class CompteBancaire
{
protected:
    float solde;

public:
    CompteBancaire();
    CompteBancaire( float solde);
    ~CompteBancaire();
    void Deposer( float montant);
    bool Retirer( float montant);
    float ConsulterSolde();
};

#endif // COMPTEBANCAIRE_H
