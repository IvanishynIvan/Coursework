#pragma once
#include <string>
#include "Trial.h"
using namespace std;

class Test : public Trial
{
private:
	int number_of_answer_options;
	string type_of_test;
public:
	Test();
	Test(Mark n_mark, string n_subject, string n_venue, string n_topic, int n_time_of_conduction, 
		int n_number_of_answer_options, string n_type_of_test);

	void Set_Number_of_answer_options(int n_number_of_answer_options);
	void Set_Type_of_test(string n_type_of_test);

	int Get_Number_of_answer_options()const;
	string Get_Type_of_test()const;

	ostream& output_obj(ostream &out, Trial* obj) const;
	istream& input_obj(istream &in, Trial* obj);

	//void show() const;
	~Test();

};