#pragma once

#include "pch.h"

class Stockage {
protected:
	Objet2D* head;
	Objet2D* tail;
public:
	Stockage();
	void AtHead(Objet2D* objet2D);
	void AtTail(Objet2D* objet2D);
	void AtIndex(Objet2D* objet2D, int index);
	void RemoveHead();
	void RemoveTail();
	void RemoveIndex(int index);
	Objet2D* getHead();
	Objet2D* getTail();
};