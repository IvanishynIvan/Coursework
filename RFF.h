#pragma once
#include "Container.h"
#include <fstream>
using namespace std;

class RFF
{
private:
	List *ring;//���� ��� ������ ������
public:
	RFF();
	RFF(List &ring); //����������� ���� ������ ������
	void Read(); 
};

