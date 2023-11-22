#include "pch.h"


int main()
{
    Stockage stockage;
    Rectangle* rect1 = new Rectangle(4, 5);
    Cube* cube1 = new Cube(3);
    Rectangle* rect2 = new Rectangle(9, 10);
    stockage.AtHead(rect1);
    stockage.AtTail(cube1);
    stockage.AtIndex(rect2, 0);

    Objet2D* index = stockage.getHead();
    while (index)
    {
        cout << index->afficheInfo() << endl;
        index = index->getSuivant();
    }
    
    delete rect1;
    delete cube1;

    return 0;
}
