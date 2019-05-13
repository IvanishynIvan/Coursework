#include <iostream>
#include <fstream>	
#include <string>
#include <iostream>
#include "Menu.h"

using namespace std;

void clean_before_getline()
{
	cin.ignore(100, '\n');
}

void Menu::input_base_obj_data(Trial * obj)
{
	string sdata;
	int idata;

	cout << "Input mark: ";
	clean_before_getline();
	getline(cin, sdata);
	obj->Set_Mark(Trial::Mark(stoi(sdata)));

	cout << "Input subject: ";
	getline(cin, sdata);
	obj->Set_Subject(sdata);

	cout << "Input venue: ";
	getline(cin, sdata);
	obj->Set_Venue(sdata);

	cout << "Input topic: ";
	getline(cin, sdata);
	obj->Set_Topic(sdata);

	cout << "Input time of conduction: ";
	cin >> idata;
	obj->Set_Time_of_conduction(idata);

}

void Menu::add_test_obj()
{
	Test *obj = new Test;
	input_base_obj_data(obj);

	string sdata;
	int idata;

	cout << "Input number of answer options: ";
	cin >> idata;
	obj->Set_Number_of_answer_options(idata);

	cout << "Input type of test: ";
	clean_before_getline();
	getline(cin, sdata);
	obj->Set_Type_of_test(sdata);

	list.Insert(obj);

}

void Menu::add_exam_obj()
{
	Exam *obj = new Exam;
	input_base_obj_data(obj);

	int idata;
	cout << "Input number of sections: ";
	cin >> idata;
	obj->Set_Number_of_sections(idata);

	list.Insert(obj);
}

void Menu::run_main_task()
{

	list.Zapros(list.Count());
}
//{
//	string subject;
//	List list_copy(list);
//
//	if (!list_copy.Count())
//	{
//		cout << "Container is empty\n";
//		return;
//	}
//
//	cout << "Input subject - ";
//	cin >> subject;
//
//	if (!cin)
//		throw logic_error("Wrong input\n");
//
//	bool found = false;
//	while (list_copy.Count() != 0)
//	{
//		Trial *temp;
//		temp = list_copy.Pop();
//
//		cout << "Topics with the same subject : \n";
//		if (temp->Get_Subject() == subject)
//		{
//			cout << temp->Get_Topic() << endl;
//			found = true;
//		}
//
//		if (!found)
//			cout << "Not found\n";
//
//	}
//}


void Menu::sort_container()
{
	/*if (list.isEmpty()) {
		std::cout << "The list is empty";
	}
	else {*/


	list.Sort();


}

void Menu::read_from_file()
{
	ifstream fin("RFF.txt");
	if (!fin.is_open())
	{
		cout << "Error of reading data\n";
	}
	string type;

	while (!fin.eof())
	{
		getline(fin, type);
		if (type == "Test")
		{
			Test* read_obj = new Test;
			read_obj->input_obj(fin, read_obj);
			list.Insert(read_obj);
		}
		else
		{
			Exam* read_obj = new Exam;
			read_obj->input_obj(fin, read_obj);
			list.Insert(read_obj);
		}
	}
	fin.close();
}


void Menu::write_to_file()
{	

	ofstream fout;
	fout.open("WTF.txt");

	if (!fout.is_open())
	{
		cout << "Error writing to file\n";
	}
	list.Display(list.Count(), fout);

	fout.close();
}

void Menu::clear_container()
{
	list.Delete();
}

void Menu::show_elements()
{
	list.Display(list.Count(), cout);
}

Menu &Menu::menu()
{
	static Menu menu;
	return menu;
}

void Menu::run()
{
	do
	{
		system("cls");

				cout<<"==========================================\n"
				"                 Main menu                \n"
				"==========================================\n"
				"| 1. Create Test obj.\n"
				"| 2. Create Exam obj.\n"
				"| 3. Show elements\n"
				"| 4. Delete the list\n"
				"| 5. Save to the file\n"
				"| 6. Load from the file\n"
				"| 7. Sort objects\n"
				"| 8. Do task\n"
				"| 9. Exit\n"
					"Your choice: ";

		cin >> choice;
		cout << "\n";

		switch (choice)
		{
		case 1:
			add_test_obj();
			break;
			system("pause");
		case 2:
			add_exam_obj();
			break;
		case 3:
			show_elements();
			break;
		case 4:
			clear_container();
			break;
		case 5:
			write_to_file();
			break;
		case 6:
			read_from_file();
			system("pause");
			break;
		case 7:
			sort_container();
			system("pause");
			break;
		case 8:
			run_main_task();
			system("pause");
			break;
		case 9:
			break;
		default:
			cout << "Bad input\n";
			system("cls");
		}
	} while (choice != 9);
}
//Menu::Menu() {}
//Menu::~Menu() {}
//
// ...
//
//void Menu::Start()
//{
//	int answer(0);
//	while (true)
//	{
//		system("clc");
//		printf("==========================================\n");
//		printf("                 Main menu                \n");
//		printf("==========================================\n");
//		printf("| 1. Create Test obj.\n");
//		printf("| 2. Create Exam obj.\n");
//		printf("| 3. Create the list\n");
//		printf("| 4. Delete the list\n");
//		printf("| 5. Save to the Fili\n");
//		printf("| 6. Load from the file\n");
//		printf("| 7. Sort objects\n");
//		printf("| 8. Do task\n");
//		printf("| 9. Exit\n");
//
//		while (true)
//		{
//			cin >> input;
//			answer = atoi(input.c_str());
//
//			switch (answer)
//			{
//			case 1:
//			{
//				...
//				break;
//			}
//
//			...
//
//			case 9:
//			{
//				...
//				break;
//			}
//			default:
//			{
//				printf("Incorrect input, try again : \n");
//			}
//
//			}
//		}
//	}
//}




