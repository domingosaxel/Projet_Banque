#include <iostream>
#include "comptebancaire.h"
#include "menu.h"
#include "compteepargne.h"

using namespace std;

enum CHOIX_MENU
{
    OPTION_1 =1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};

int main()
{
    float interet;
    float solde;
    float retrait;
    float ajout;
    int choix;

    /*cout << "De combien est le solde du compte ? ";
    cin >> solde;
    cout << endl;

    CompteBancaire compte(solde);
    Menu leMenu("compteBancaire.txt");
    do
    {
        choix = leMenu.Afficher();
        switch(choix)
        {
        case OPTION_1:
            cout << "Le solde du compte est de : ";
            cout << compte.ConsulterSolde();
            cout << " euros" << endl;
            cout << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Combien voulez vous ajouter ? ";
            cin >> ajout;
            cout << endl;
            compte.Deposer(ajout);
            cout << "Vous venez d'ajouter " << ajout << " euros" << endl;
            cout << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            cout << "Combien voulez vous retirer ? ";
            cin >> retrait;
            cout << endl;
            if(retrait<solde)
            {
                compte.Retirer(retrait);
                cout << "Vous venez de retirer " << retrait << " euros" << endl;
            }else{
                cout << "Fond insufisant" << endl;
            }
            cout << endl;
            Menu::AttendreAppuiTouche();
            break;
        }
    }while(choix!=QUITTER);
    */


    cout << "De combien est le solde du compte ? ";
    cin >> solde;
    cout << "De combien est l'interet du compte ? ";
    cin >> interet;
    cout << endl;

    CompteEpargne compte2(solde,interet);
    Menu leMenu2("compteEpargne.txt");

    do
    {
        choix = leMenu2.Afficher();
        switch(choix)
        {
        case OPTION_1:
            cout << "Le solde du compte est de : ";
            cout << compte2.ConsulterSolde();
            cout << " euros" << endl;
            cout << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Combien voulez vous ajouter ? ";
            cin >> ajout;
            cout << endl;
            compte2.Deposer(ajout);
            cout << "Vous venez d'ajouter " << ajout << " euros" << endl;
            cout << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            cout << "Combien voulez vous retirer ? ";
            cin >> retrait;
            cout << endl;
            if(solde-retrait>0)
            {
                compte2.Retirer(retrait);
                cout << "Vous venez de retirer " << retrait << " euros" << endl;
            }else{
                cout << "Fond insufisant" << endl;
            }
            cout << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_4:
            compte2.CalculerInterets(solde,interet);
            cout << endl;
            Menu::AttendreAppuiTouche();
            break;
        }
    }while(choix!=QUITTER);

    return 0;
}
