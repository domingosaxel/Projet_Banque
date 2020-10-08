#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

class CompteClient
{
private:
    std::string nom;
    int numero;

public:
    CompteClient();
    CompteClient(const char *nom, int numero);
    ~CompteClient();
    void OuvrirCompteEpargne();
    void GererCompteBancaire();
    void GererCompteEpargne();
};

#endif // COMPTECLIENT_H
