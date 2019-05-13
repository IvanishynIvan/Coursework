#pragma once
#include "Container.h"
#include <fstream>
using namespace std;

class RFF
{
private:
	List *ring;//поле яке містить список
public:
	RFF();
	RFF(List &ring); //конструктор який приймає список
	void Read(); 
};

