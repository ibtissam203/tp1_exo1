#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath> // pour sqrt
using namespace std;

class Complexe {
    double Re, Img;

public:
    // Constructeurs
    Complexe();
    Complexe(double reel, double imaginaire);
    Complexe(const Complexe& c);

    // Méthodes
    void afficher() const;
    

    // Surcharge des opérateurs
    Complexe operator+(const Complexe& Z) ;
    Complexe operator+(const double a) const;
    Complexe operator-(const Complexe& Z) const;
    Complexe operator*(const Complexe& R) const;
    bool operator==(const Complexe& R) const;
    double modulo(const Complexe& R);
    Complexe conjuge() const;


};

 

#endif
