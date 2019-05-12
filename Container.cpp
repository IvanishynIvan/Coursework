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
	return size;    //Повертаємо число елементів списку
}

void List::Insert(Trial* elem) 
{
	size++;      //При кожному додаванні елемента збільшуємо число елементів в списку
	Node  *temp = new Node;    //Виділення пам'яті для нового елемента списку
	temp->Next = Head;		//Замикання контуру.Останній елемент - це початок списку
	temp->info = elem;      //Записуємо в виділену комірку пам'яті значення info

	if (Head != NULL)		//У тому випадку якщо список не порожній
	{
		Tail->Next = temp;   //Запис даних в наступному за останнім елементом поле
		Tail = temp;         //Останній активний елемент = щойно створений
	}
	else Head = Tail = temp;  //Якщо список порожній то створюється перший елемент.
}

Trial* List::Pop()
{
	if (Head != nullptr)
	{
		Trial* info = Head->info;
		Head = Head->Next;
		return info;
	}
	else
		cout << "The list is empty";
}

void List::Delete()
{
	if (Head != nullptr)
	{
		while (size != 0)                       
		{
			Node *temp = Head->Next;
			delete Head;        //Звільняємо пам'ять від активного елемента
			Head = temp;        //Зміна адреси початку на адресу наступного елемента
			size--;                                
		}
	}
	else
		cout << "The list is empty";
}

void List::Display(int temp) const
{
	Node *tempHead = Head;      //Вказуємо на голову
	temp = size;         //Тимчасова змінна дорівнює числу елементів в списку
	if (tempHead == nullptr)
		cout << "The list is empty\n";
	else
		while (temp != 0)    //Пока не выполнен признак прохода по всему списку
		{
			tempHead->info->show();    //Черговий елемент списку на екран
			tempHead = tempHead->Next;   //Зазначаємо, що потрібен наступний елемент
			temp--;                               
		}
	}

//сортировка слиянием
Node* merge_sort(Node* h, Node** e) {
	Node* p, *n, *t, *la, *lb;
	if ((h == NULL) || (h->Next == NULL))
		return h;

	la = lb = h;
	p = n = t = NULL;
	for (Node* i = h; (i != NULL) && (i->Next != NULL); i = i->Next->Next) {
		lb = la;
		la = la->Next;
	}
	lb->Next = NULL;

	h = merge_sort(h, e);
	la = merge_sort(la, e);

	while ((h != NULL) || (la != NULL)) {
		if (la == NULL) {
			n = h;
			h = h->Next;
		}
		else if (h == NULL) {
			n = la;
			la = la->Next;
		}
		else if (h->info < la->info) {
			n = h;
			h = h->Next;
		}
		else {
			n = la;
			la = la->Next;
		}

		if (p == NULL)
			p = n;
		else
			t->Next = n;
		t = n;
	}
	*e = t;
	return p;
}

void List::Sort()
{
	if ((Tail == NULL) || (Tail->Next == NULL))
		return;

	Tail->Next = NULL;
	Head = merge_sort(Head, &Tail);
	Tail->Next = Head;

	std::cout << "\n";
}
