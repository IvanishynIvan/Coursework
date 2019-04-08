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
	Node *Head, *Tail;                //������ ������� � ��� ��� ���������
	int size;                         //����� ��������� � ������
public:
	List();
	~List();
	
	void Insert(Trial* elem);
	void Delete();
	void Display(int size);
	int Count();                                                  //�������� ������� ������������ ����� ��������� � ������
};
