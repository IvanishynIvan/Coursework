#include <iostream>
#include "Container.h"
using namespace std;

List::List() : Head(NULL), Tail(NULL), size(0) {}
List::~List()
{
	Delete();
}

int List::Count()
{
	return size;    //��������� ����� �������� ������
}

void List::Insert(Trial* elem) 
{
	size++;      //��� ������� �������� �������� �������� ����� �������� � ������
	Node  *temp = new Node;    //�������� ���'�� ��� ������ �������� ������
	temp->Next = Head;		//��������� �������.������� ������� - �� ������� ������
	temp->info = elem;      //�������� � ������� ������ ���'�� �������� info

	if (Head != NULL)		//� ���� ������� ���� ������ �� �������
	{
		Tail->Next = temp;   //����� ����� � ���������� �� ������� ��������� ����
		Tail = temp;         //������� �������� ������� = ����� ���������
	}
	else Head = Tail = temp;  //���� ������ ������� �� ����������� ������ �������.
}

Trial* List::Pop()
{
	if (Head != nullptr)
	{
		Trial* info = Head->info;
		Head = Head->Next;
		return info;
	}
	else {
		cout << "The list is empty";
		//return;
	}
}

void List::Delete()
{
	if (Head != nullptr)
	{
		while (size != 0)                       
		{
			Node *temp = Head->Next;
			delete Head;        //��������� ���'��� �� ��������� ��������
			Head = temp;        //���� ������ ������� �� ������ ���������� ��������
			size--;                                
		}
	}
	else
		cout << "The list is empty";
}

void List::Display(int temp, ostream &out) const
{
	Node *tempHead = Head;      //������� �� ������
	temp = size;         //��������� ����� ������� ����� �������� � ������
	if (tempHead == nullptr)
		cout << "The list is empty\n";
	else
		while (temp != 0)    //���� �� �������� ������� ������� �� ����� ������
		{
			if (Test *cast_ptr = dynamic_cast<Test *>(tempHead->info))//if (typeid(*) == typeid())
			{
				out << "Test \n";
			}
			else
			{
				out << "Exam \n";
			}
			tempHead->info->output_obj(out,tempHead->info); //�������� ������� ������ �� �����
			tempHead = tempHead->Next; //���������, �� ������� ��������� �������
			temp--;
		}
}
	
void List::Sort()
{

	Node* temp_1 = Head;
	Node* temp_2;
	Trial* temp_var;

	for (int i = 0; i < Count() - 1; i++)
	{
		temp_2 = temp_1->Next;
		for (int j = 0; j < Count() - 1; j++)
		{
			if (temp_1->info->Get_Subject() < temp_2->info->Get_Subject())
			{
				temp_var = temp_2->info;
				temp_2->info = temp_1->info;
				temp_1->info = temp_var;
			}
			temp_2 = temp_2->Next;
		}
		temp_1 = temp_1->Next;
	}
	Head = temp_1;
}

void List::Zapros(int temp)
{
	string subject;
	Node *tempHead = Head;

	temp = size;         //��������� ����� ������� ����� �������� � ������

	if (tempHead == nullptr) {
		cout << "The list is empty\n";
		return;
	}

	cout << "Input subject - ";
	cin >> subject;

	if (!cin)
		throw logic_error("Wrong input\n");

	bool found = false;

	cout << "Topics with the same subject : \n";
	while (temp != 0)    //���� �� �������� ������� ������� �� ����� ������
	{
		if (tempHead->info->Get_Subject() == subject)
		{
			cout << tempHead->info->Get_Topic() << endl;
			found = true;
		}

		if (!found)
			cout << "Not found\n";

		//tempHead->info->output_obj(out); //�������� ������� ������ �� �����
		tempHead = tempHead->Next; //���������, �� ������� ��������� �������
		temp--;
	}
}

