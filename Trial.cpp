#include "Trial.h"
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

Trial::Trial() {}
Trial::Trial(Mark n_mark, string n_subject, string n_venue, string n_topic, int n_time_of_conduction) : mark(n_mark) , subject(n_subject), venue (n_venue),
	topic(n_topic) , time_of_conduction(n_time_of_conduction) { }
Trial::~Trial() {}

void Trial::Set_Mark(Mark n_mark) { mark = n_mark; }
void Trial::Set_Subject(string n_subject) { subject = n_subject; }
void Trial::Set_Venue(string n_venue) { venue = n_venue; }
void Trial::Set_Topic(string n_topic) { topic = n_topic; }
void Trial::Set_Time_of_conduction(int n_time_of_conduction) { time_of_conduction = n_time_of_conduction; }

Trial::Mark Trial::Get_Mark() const { return mark; }
string Trial::Get_Subject() const { return subject; }
string Trial::Get_Venue() const { return venue; }
string Trial::Get_Topic() const { return topic; }
int Trial::Get_Time_of_conduction() const { return time_of_conduction; }

ostream& Trial::output_obj(ostream &out,Trial* obj) const
{
	out << "Mark: " << mark
		<< "\nSubject: " << subject
		<< "\nVenue: " << venue
		<< "\nTopic: " << topic
		<< "\nTime of conduction: " << time_of_conduction;
	return out;
}

istream& Trial::input_obj(istream &in, Trial* obj)
{
	in >> obj;
	return in;
}

ostream &operator<<(ostream &out, Trial *obj)
{

	obj->output_obj(out,obj);
	return out;
}

istream &operator>>(istream &in, Trial *obj)
{
	string temp;
	getline(in, temp);
	obj->Set_Mark(Trial::Mark(stoi(temp)));
	getline(in, temp);
	obj->Set_Subject(temp);
	getline(in, temp);
	obj->Set_Venue(temp);
	getline(in, temp);
	obj->Set_Topic(temp);
	getline(in, temp);
	obj->Set_Time_of_conduction(stoi(temp));

	return in;
}



//void Trial::show() const 
//{
//	cout << "Mark: " << mark;
//	cout << "\nSubject: " << subject;
//	cout << "\nVenue: " << venue;
//	cout << "\nMonth of holding: " << month_of_holding;
//	cout << "\nTime of conduction: " << time_of_conduction;
//}



