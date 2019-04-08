#include <iostream>
#include "Container.h"
using namespace std;

List::List() : Head(NULL), Tail(NULL), size(0) {}
List::~List() {}

//void Insert(Trial* elem, int x)

int List::Count()
{
	return size;                             //Возвращаем число элементов списка
}

void List::Insert(Trial* elem)
{
	size++;                                            //При каждом добавлении элемента увеличиваем число элементов в списке
	Node  *temp = new Node;                            //Выделение памяти для нового элемента списка
	temp->Next = Head; 									//Замыкание контура. Последний элемент - это начало списка
	temp->info = elem;                                       //Записываем в выделенную ячейку памяти значение x

	if (Head != NULL)                                   //В том случае если список не пустой
	{
		Tail->Next = temp;                                //Запись данных в следующее за последним элементом поле
		Tail = temp;                                      //Последний активный элемент=только что созданный.
	}
	else Head = Tail = temp;                            //Если список пуст то создается первый элемент.
}

void List::Delete()
{
	if (Head != nullptr)
	{
		while (size != 0)                        //Пока размерность списка не станет нулевой
		{
			Node *temp = Head->Next;
			delete Head;                           //Освобождаем память от активного элемента
			Head = temp;                           //Смена адреса начала на адрес следующего элемента
			size--;                                //Один элемент освобожден. корректируем число элементов
		}
	}
	else
		cout << "List is empty";
}

void List::Display(int temp)
{
	Node *tempHead = Head;                  //Указываем на голову
	temp = size;                            //Временная переменная равная числу элементов в списке
	if (tempHead == nullptr)
		cout << "List is empty\n";
	else
		while (temp != 0)                        //Пока не выполнен признак прохода по всему списку
		{
			std::cout << "List is :\n";
			cout << tempHead->info << " ";           //Очередной элемент списка на экран
			tempHead = tempHead->Next;            //Указываем, что нужен следующий элемент
			temp--;                               //Один элемент считан, значит осталось на один меньше
		}
	}

