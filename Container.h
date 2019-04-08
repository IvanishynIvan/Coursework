#pragma once
#include "Trial.h"
#include <iostream>

struct  Node
{
	int x;
	Trial* info;
	Node *Next;
};
class List
{
	Node *Head, *Tail;                //Первый элемент и тот что последний
	int size;                         //Число элементов в списке
public:
	List();
	~List();
	
	void Insert(Trial* elem);
	void Delete();
	void Display(int size);
	int Count();                                                  //Прототип функции возвращающей число элементов в списке
};
