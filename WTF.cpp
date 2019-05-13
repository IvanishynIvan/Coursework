#include "WTF.h"
#include "Trial.h"
#include "Test.h"
#include "Exam.h"
#include "Menu.h"

WTF::WTF() {}

WTF::WTF(List &ring) : ring(&ring)
{}

bool WTF::Write()
{
	/*if (menu.run().list.isEmpty()) {
		cout << "The list is empty";
	}
	else {*/

	//ofstream fout(fname);
	ofstream fout; 
	fout.open("WTF.txt");

		if (!fout.is_open())
		{
			cout << "Error writing to file\n";
			return false;
		}
		ring->Display(ring->Count(), fout);
	
		fout.close();
		return true;
}

