#include "pch.h"

Objet2D::Objet2D()
{
	this->dim1 = 0;
	this->dim2 = 0;
}

Objet2D::Objet2D(int tdim1, int tdim2)
{
	this->dim1 = dim1;
	this->dim2 = dim2;
	
}

void Objet2D::setSuivant(Objet2D* objet2D)
{		
	this->suivant = objet2D;
}

Objet2D* Objet2D::getSuivant()
{
	return this->suivant;
}



Rectangle::Rectangle() : Objet2D()
{
}

Rectangle::Rectangle(int tdim1, int tdim2) : Objet2D(tdim1, tdim2)
{
	this->dim1 = tdim1;
	this->dim2 = tdim2;
	this->suivant = nullptr;
}

int Rectangle::getLongueur()
{
	return this->dim1;
}

int Rectangle::getLargeur()
{
	return this->dim2;
}

int Rectangle::getPerimetre()
{
	return(this->dim1 + this->dim2) * 2;
}

int Rectangle::getAire()
{
	return this->dim1 * this->dim2;
}

string Rectangle::afficheInfo()
{
	return "\nLongueur : " + to_string(this->dim1) + "\nLargeur : " + to_string(this->dim2) + "\nPerimetre : " + to_string(getPerimetre()) + "\nAire : " + to_string(getAire());
}

Cube::Cube() : Rectangle()
{
}

Cube::Cube(int tcote) : Rectangle(tcote, tcote)
{
	this->dim1 = tcote;
	this->dim2 = tcote;
	this->suivant = nullptr;
}

int Cube::getCote()
{
	return this->dim1;
}

int Cube::getPerimetre()
{
	return (this->dim1 + this->dim2)*2;
}

int Cube::getAire()
{
	return this->dim1*this->dim2;
}

string Cube::afficheInfo()
{
	return "\nCote : " + to_string(this->dim1) + "\nPerimetre : " + to_string(getPerimetre()) + "\nAire : " + to_string(getAire());
}
