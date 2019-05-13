#include <iostream>
#include <string>
#include <conio.h>
#include "Trial.h"
#include "Test.h"
#include "Exam.h"
#include "Container.h"
#include "Menu.h"

using namespace std;

int main()
{
	Menu::menu().run();

	/*
	Test test(Trial::Mark (1), "Fizika" , "School" , "May" , 4 ,4, "Mehanika");
	Exam exam(Trial::Mark(1), "Fizika", "School", "May", 4, 4);
	Trial* tst, *exm;
	tst = &test;
	exm = &exam;
	List lst;	
	lst.Insert(tst);
	lst.Insert(exm);
	lst.Display(1);*/
	_getch();
}