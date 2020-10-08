#include "menu.h"

/**
 *  @author Axel DOMINGOS
 *  @abstract Class pour créer un menu
 *  @date 8 octobre 2020
 */

using namespace std;

/**
 * @brief Menu::Menu (Constructeur)
 * @param _nom nom du fichier contenant les items du menu
 */

Menu::Menu(const char *_nom):
    nom(_nom),
    longueurMax(0),
    nbLignes(0)
{
    ifstream leFichier(nom.c_str());
    if(!leFichier.is_open())
        cerr << "Erreure lors de l'ouverture du fichier" << endl;
    else
        nbLignes=static_cast<int>(count(istreambuf_iterator<char>(leFichier),istreambuf_iterator<char>(),'\n'));
    leFichier.seekg(0,ios::beg);
    options = new string[nbLignes];
    for(int indice=0;indice<nbLignes;indice++)
    {
        getline(leFichier,options[indice]);
        options[indice].length();
        if(options[indice].length()>longueurMax)
        {
            longueurMax=options[indice].length();
        }
    }
}

/**
 * @brief Menu::~Menu (Destructeur)
 */

Menu::~Menu()
{
    if (this->options != nullptr)
        delete  [] options;
}

/**
 * @brief Menu::Afficher
 *        Méthode pour créer la vue utilisateur du menu.
 *        Cette méthode attend la saisie du choix de l'utilisateur
 * @return Le choix de l'utilisateur sous la forme d'une valeur entière
 */

int Menu::Afficher()
{
    int choix;
    cout <<"+" << setfill('-') <<setw(6) << "+" << setfill('-') <<setw(longueurMax+2)<< "+"<< endl;
    for(int i=0;i<nbLignes;i++)
    {
        cout <<"| "  <<right<<setfill(' ')<<setw(2)<<i+1<<setw(3)<<" |"<<setw(longueurMax+1)<<left<<options[i]<<"|"  <<endl;
    }
    cout <<right<<"+" << setfill('-') <<setw(6) << "+" << setfill('-') <<setw(longueurMax+2)<< "+"<< endl;
    cout<<endl;
    cout<<"Votre choix svp : ";
    if(!(cin>>choix))
    {
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        choix=-1;
    }
    return choix;
}

/**
 * @brief Menu::AttendreAppuiTouche
 * @abstract Méthode statique pour attendre l'appui sur une touche du clavier.
 *           Le buffer d'entrée est vidé, l'écran est effacé après l'action sur le clavier
 */

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout<<endl<<"Appuyer Sur La Touche Entrée Pour Continuer...";
    getline(cin,uneChaine);
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    system("clear");
}

Exception::Exception(int _code, std::string _message):
    code(_code),
    message(_message)
{}

int Exception::ObtenirCodeErreur() const
{
    return code;
}

std::string Exception::ObtenirMessage() const
{
    return message;
}

