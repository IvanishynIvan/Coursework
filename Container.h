#pragma once
#include "Trial.h"
#include "Test.h"
#include "Exam.h"
#include <iostream>

struct  Node
{
	Trial* info;
	Node *Next;
};
class List
{
	Node *Head, *Tail;                //Перший елемент і той що останній
	int size;                         //Число елементів в списку
public:

	List();
	~List();

	bool isEmpty() const { return Head == nullptr; }
	void Insert(Trial* elem);
	Trial* Pop();
	void Delete();
	void Sort();
	virtual void Display(int size) const;
	int Count();                //Прототип функції , яка повертає число елементів в списку
};

