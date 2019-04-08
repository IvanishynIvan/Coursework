#include <iostream>
#include "Container.h"
using namespace std;

List::List() : Head(NULL), Tail(NULL), size(0) {}
List::~List() {}

//void Insert(Trial* elem, int x)

int List::Count()
{
	return size;                             //���������� ����� ��������� ������
}

void List::Insert(Trial* elem)
{
	size++;                                            //��� ������ ���������� �������� ����������� ����� ��������� � ������
	Node  *temp = new Node;                            //��������� ������ ��� ������ �������� ������
	temp->Next = Head; 									//��������� �������. ��������� ������� - ��� ������ ������
	temp->info = elem;                                       //���������� � ���������� ������ ������ �������� x

	if (Head != NULL)                                   //� ��� ������ ���� ������ �� ������
	{
		Tail->Next = temp;                                //������ ������ � ��������� �� ��������� ��������� ����
		Tail = temp;                                      //��������� �������� �������=������ ��� ���������.
	}
	else Head = Tail = temp;                            //���� ������ ���� �� ��������� ������ �������.
}

void List::Delete()
{
	if (Head != nullptr)
	{
		while (size != 0)                        //���� ����������� ������ �� ������ �������
		{
			Node *temp = Head->Next;
			delete Head;                           //����������� ������ �� ��������� ��������
			Head = temp;                           //����� ������ ������ �� ����� ���������� ��������
			size--;                                //���� ������� ����������. ������������ ����� ���������
		}
	}
	else
		cout << "List is empty";
}

void List::Display(int temp)
{
	Node *tempHead = Head;                  //��������� �� ������
	temp = size;                            //��������� ���������� ������ ����� ��������� � ������
	if (tempHead == nullptr)
		cout << "List is empty\n";
	else
		while (temp != 0)                        //���� �� �������� ������� ������� �� ����� ������
		{
			std::cout << "List is :\n";
			cout << tempHead->info << " ";           //��������� ������� ������ �� �����
			tempHead = tempHead->Next;            //���������, ��� ����� ��������� �������
			temp--;                               //���� ������� ������, ������ �������� �� ���� ������
		}
	}

