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
private:
	Node *Head, *Tail;                //������ ������� � ��� �� �������
	int size;                         //����� �������� � ������
public:

	List();
	~List();

	bool isEmpty() const { return Head == nullptr; }
	void Insert(Trial* elem);
	Trial* Pop();
	void Delete();
	void Sort();
	void Zapros(int size);
	virtual void Display(int size , ostream &out) const;
	int Count();                //�������� ������� , ��� ������� ����� �������� � ������
};
