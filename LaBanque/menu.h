
#ifndef MENU_H
#define MENU_H
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

class Menu
{
private:
    std::string nom;
    std::string *options;
    int nbOptions;
    unsigned long longueurMax;
    int nbLignes;
public:
    Menu(const char *_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
};
#endif // MENU_H

class Exception
{
public:
    Exception(int _code, std::string _message);
    int ObtenirCodeErreur() const;
    std::string ObtenirMessage() const;

private:
    int code;
    std::string message;
};


