#pragma once
#include "Container.h"
#include "RFF.h"
#include "WTF.h"
#include "Test.h"
#include <string>
#include <Windows.h>

using namespace std;

class Menu
{
private:
	int choice;
	List list;
	RFF rff;
	// wtf;
	

	Menu() = default;
	void input_base_obj_data(Trial *obj);
	void add_test_obj();
	void add_exam_obj();
	void run_main_task();
	void sort_container();
	void read_from_file();
	void write_to_file();
	void clear_container();
	void show_elements();

public:
	static Menu &menu();
	void run();

	Menu(const Menu&) = delete;
	Menu& operator=(const Menu&) = delete;

	~Menu() = default;
};


