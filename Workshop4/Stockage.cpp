#include "pch.h"

Stockage::Stockage()
{
	this->head = nullptr;
	this->tail = nullptr;
}

void Stockage::AtHead(Objet2D* objet2D)
{
		objet2D->setSuivant(head);
		head = objet2D;
		if (!tail) {
			tail = objet2D;
		}
}

void Stockage::AtTail(Objet2D* objet2D)
{
	if (!head) {
		head = objet2D;
		tail = objet2D;
	}
	tail->setSuivant(objet2D);
	tail = objet2D;
}

void Stockage::AtIndex(Objet2D* objet2D, int index)
{
	if (index == 0) {
		AtHead(objet2D);
	}
	else {
		Objet2D* index2D = head;
		for (int i = 0; i < index - 1; i++)
		{
			index2D = index2D->getSuivant();
		}
		objet2D->setSuivant(index2D->getSuivant());
		index2D->setSuivant(objet2D);
	}
}

void Stockage::RemoveHead()
{
	Objet2D* tmp = head;
	head = head->getSuivant();
	delete tmp;
}

void Stockage::RemoveTail()
{
	Objet2D* index = head;
	while (index->getSuivant()!=nullptr)
	{
		index = index->getSuivant();
	}
	delete index->getSuivant();
	index->setSuivant(nullptr);
	
}

void Stockage::RemoveIndex(int index)
{
	Objet2D* index2D = head;
	Objet2D* tmp;
	for (int i = 0; i < index - 1; i++)
	{
		index2D = index2D->getSuivant();
	}
	tmp = index2D->getSuivant();
	index2D->setSuivant(tmp->getSuivant());
	delete tmp;
}

Objet2D* Stockage::getHead()
{
	return this->head;
}

Objet2D* Stockage::getTail()
{
	return this->tail;
}
