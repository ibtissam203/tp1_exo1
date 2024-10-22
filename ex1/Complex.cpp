#include "Complex.h"
using namespace std;
Complex::Complex()
{
	//std::cout << "constructeur sans parametre" << std::endl;
	this->Re = 0;
	this->Img = 0;
}

Complex::Complex(double reel, double imaginaire)
{
	this->Re = reel;
	this->Img = imaginaire;
}

Complex::Complex(const Complex& c)
{
	this->Re = c.Re;
	this->Img = c.Img;

}


void Complex::afficher() const
{
	cout << "la methode afficher" << endl;
	cout << "complex=" << this->Re << "+ i" << this->Img << endl;
}


void Complex::afficher(double i) const
{
	cout << "la methode afficher" << endl;
	cout << "complex=" << this->Re << "+ i" << this->Img << endl;
}

Complex Complex::operator+(const Complex& Z)
{
	return Complex(Re + Z.Re, Img + Z.Img);
}



double Complex::modulo(Complex& R)
{
	return 0.0;
}


