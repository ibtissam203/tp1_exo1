#pragma once
class Complex
{
private:
	double Re;
	double Img;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	void afficher() const;
	void afficher(double) const;
	Complex operator + (const Complex& Z);
	double modulo(Complex& R);
};

