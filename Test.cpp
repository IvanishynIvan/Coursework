#include "Test.h"
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

Test::Test() : Trial() { }
Test::Test(Mark n_mark, string n_subject, string n_venue, string n_topic, int n_time_of_conduction, 
	int n_number_of_answer_options, string n_type_of_test) : Trial(n_mark, n_subject, n_venue, n_topic, n_time_of_conduction), 
	number_of_answer_options(n_number_of_answer_options), type_of_test(n_type_of_test) { }

Test::~Test() {}

void Test::Set_Number_of_answer_options(int n_number_of_answer_options) { number_of_answer_options = n_number_of_answer_options; }
void Test::Set_Type_of_test(string n_type_of_test) { type_of_test = n_type_of_test; }

int Test::Get_Number_of_answer_options() const { return number_of_answer_options; }
string Test::Get_Type_of_test() const { return type_of_test; }

ostream& Test::output_obj(ostream &out, Trial* obj) const
{
	Trial::output_obj(out,obj);
	out << "\nNumber of answer options: " << number_of_answer_options
		<< "\nType of test: " << type_of_test<<endl;
	return out;
}

istream& Test::input_obj(istream &in, Trial* obj)
{
	Trial::input_obj(in, obj);
	in >> number_of_answer_options
		>> type_of_test;
	return in;
}


//void Test::show() const
//{
//	Trial::show();
//	cout << "\nType of test: " << type_of_test;
//	cout << "\nNumber of answer options: " << number_of_answer_options << endl << endl;
//}



