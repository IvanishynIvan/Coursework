#include "Exam.h"
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

Exam::Exam() : Trial() { }
Exam::Exam(Mark n_mark, string n_subject, string n_venue, string n_topic, int n_time_of_conduction, int n_number_of_sections)
	: Trial(n_mark, n_subject, n_venue , n_topic, n_time_of_conduction), number_of_sections(n_number_of_sections) { }

Exam::~Exam() {}

void Exam::Set_Number_of_sections(int n_number_of_sections) { number_of_sections = n_number_of_sections; }

int Exam::Get_Number_of_sections() const { return number_of_sections; }

istream& Exam::input_obj(istream &in, Trial* obj)
{
	Trial::input_obj(in, obj);
	in >> number_of_sections;
	return in;
}

ostream& Exam::output_obj(ostream &out, Trial* obj) const
{
	Trial::output_obj(out,obj);
	out << "\nNumber of sections: " << number_of_sections << endl;
	return out;

}