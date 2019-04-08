#include "Test.h"
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

Test::Test(string n_subject, int n_time, string n_topic) : Trial(n_subject, n_time), topic(n_topic) { }

Test::~Test() {}

void Test::Set_Topic(string n_topic) { topic = n_topic; }

string Test::Get_Topic() const { return topic; }

void Trial::show() const {}



