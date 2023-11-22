#pragma once
#include "pch.h"

class Objet2D {
protected: 
	int dim1;
	int dim2;
	Objet2D* suivant;
public:
	Objet2D();
	Objet2D(int tdim1, int tdim2);
	void setSuivant(Objet2D* objet2D);
	Objet2D* getSuivant();
	virtual int getPerimetre() = 0;
	virtual int getAire() = 0;
	virtual string afficheInfo() = 0;
};

class Rectangle : public Objet2D {
public: 
	Rectangle();
	Rectangle(int tdim1, int tdim2);
	int getLongueur();
	int getLargeur();
	virtual int getPerimetre() override;
	virtual int getAire() override;
	virtual string afficheInfo() override;
};

class Cube : public Rectangle {
public:
	Cube();
	Cube(int tcote);
	int getCote();
	int getPerimetre() override;
	int getAire() override;
	string afficheInfo() override;
};