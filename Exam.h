#pragma once
#include <string>
#include "Trial.h"
using namespace std;

class Exam : public Trial
{
private:
	int minscore;
public:
	Exam(string n_subject, int n_time, int n_minscore);

	void Set_Minscore(int n_minscore);
	int Get_Minscore()const;

	void show() const;
	~Exam();

};
