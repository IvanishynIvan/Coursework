#include "Exam.h"
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

Exam::Exam(string n_subject, int n_time, int n_minscore) : Trial(n_subject, n_time), minscore(n_minscore) { }

Exam::~Exam() {}

void Exam::Set_Minscore(int n_minscore) { minscore = n_minscore; }

int Exam::Get_Minscore() const { return minscore; }

void Trial::show() const {}



