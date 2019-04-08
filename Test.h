#pragma once
#include <string>
#include "Trial.h"
using namespace std;

class Test : public Trial
{
private:
	string topic;
public:
	Test(string n_subject,int n_time, string n_topic);

	void Set_Topic(string n_topic);
	string Get_Topic()const;

	void show() const;
	~Test();

};