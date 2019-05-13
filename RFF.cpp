#include "RFF.h"
#include <iostream>
#include "Trial.h"
#include "Test.h"
#include "Exam.h"
using namespace std;

RFF::RFF() {}
RFF::RFF(List &ring) :ring(&ring)
{}

void RFF::Read()
{
	ifstream fin;
	fin.open("RFF.txt");
	if (!fin.is_open())
	{
		cout << "Error of reading data\n";
	}
	string type;
	
	while (!fin.eof())
	{
		getline(fin, type);
		if (type == "Test")
		{
			Test *read_obj = new Test;
			read_obj->input_obj(fin,read_obj);
			ring->Insert(read_obj);
		}
		else
		{
			Exam *read_obj = new Exam;
			read_obj->input_obj(fin, read_obj);
			ring->Insert(read_obj);
		}
	}
	fin.close();
}
