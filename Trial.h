#pragma once
#include <string>

using namespace std;
class Trial
{
public:
	enum Mark { Enough=1, Satisfactorily, Okay, Very_well , Perfectly};
protected:
	Mark mark;
	string subject;
	string venue;
	string topic;
	int time_of_conduction;
	
public:
	Trial();
	Trial(Mark n_mark, string n_subject, string n_venue, string n_topic, int n_time_of_conduction);

	void Set_Mark(Mark n_mark);
	void Set_Subject(string n_subject);
	void Set_Venue(string n_venue);
	void Set_Topic(string n_topic);
	void Set_Time_of_conduction(int n_time_oj_conduction);

	Mark Get_Mark() const;
	string Get_Subject() const;
	string Get_Venue() const;
	string Get_Topic() const;
	int Get_Time_of_conduction() const;

	virtual ostream& output_obj(ostream &out, Trial* obj) const;
	virtual istream& input_obj(istream &in, Trial* obj);

	friend ostream &operator<<(ostream &out, const Trial *obj);
	friend istream &operator>>(istream &in, Trial *obj);

	virtual ~Trial();
};
