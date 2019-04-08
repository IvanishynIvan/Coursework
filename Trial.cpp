#include "Trial.h"
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

Trial::Trial(string n_subject, int n_time) : subject(n_subject), time(n_time) { }
Trial::~Trial() {}

void Trial::Set_Subject(string n_subject) { subject = n_subject; }
void Trial::Set_Time(int n_time) { time = n_time; }

string Trial::Get_Subject() const const{ return subject; }
int Trial::Get_Time() const { return time; }
void Trial::show() const {}



