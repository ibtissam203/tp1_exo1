#include "Complexe.h"
#include <cmath>

// Constructeur sans paramètre
Complexe::Complexe()
{
    this->Re = 0;
    this->Img = 0;
}

// Constructeur avec paramètres
Complexe::Complexe(double reel, double imaginaire)
{
    this->Re = reel;
    this->Img = imaginaire;
}

// Constructeur de copie
Complexe::Complexe(const Complexe& c)
{
    this->Re = c.Re;
    this->Img = c.Img;
}

// Méthode d'affichage
void Complexe::afficher() const
{
    
    cout << "complex=" << this->Re << "+ " << this->Img << "i"<< endl << endl;
}


// Surcharge de l'opérateur "+" pour Complexe + Complexe
Complexe Complexe::operator+(const Complexe& Z) 
{
    // Créer un nouvel objet Complexe avec la somme des parties réelles et imaginaires
    return Complexe(Re + Z.Re, Img + Z.Img);
}


Complexe Complexe::operator+(const double a) const
{
    return Complexe(Re + a,Img);
}



Complexe Complexe::operator-(const Complexe& Z) const
{
    return Complexe(Re - Z.Re, Img - Z.Img);
}

Complexe Complexe::operator*(const Complexe& R) const
{
    return Complexe(Re * R.Re - Img * R.Img, Re * R.Img + Img * R.Re);
}

bool Complexe::operator==(const Complexe& R) const
{
    return (Re == R.Re) && (Img == R.Img);
}

double Complexe::modulo(const Complexe& R)
{
    return sqrt(pow(R.Re, 2) + pow(R.Img, 2));
}

Complexe Complexe::conjuge() const
{
    return Complexe(Re,-(Img));
}

