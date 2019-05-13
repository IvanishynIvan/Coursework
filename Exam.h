#pragma once
#include <string>
#include "Trial.h"
using namespace std;

class Exam : public Trial
{
private:
	int number_of_sections;
public:
	Exam();
	Exam(Mark n_mark, string n_subject, string n_venue, string n_topic, int n_time_of_conduction , int n_number_of_sections);

	void Set_Number_of_sections(int n_number_of_sections);
	int Get_Number_of_sections()const;

	ostream& output_obj(ostream &out, Trial* obj) const;
	istream& input_obj(istream &in, Trial* obj);

	~Exam();

};
