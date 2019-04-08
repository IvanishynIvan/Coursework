#include <iostream>
#include <string>
#include "Trial.h"
#include "Test.h"
#include "Exam.h"
#include "Container.h"

using namespace std;

int main()
{
	Test test("Fizika" , 4 , "Mehanika");
	Exam exam("Math" , 3 , 120);
	Trial* tst, *exm;
	tst = &test;
	exm = &exam;
	List lst;
	lst.Insert(tst);
	lst.Insert(exm);
	lst.Display(1);

}