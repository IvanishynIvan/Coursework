#include <string>

using namespace std;
class Trial
{
protected:
	string subject;
	int time;
public:
	Trial();
	Trial(string n_subject, int n_time); 

	void Set_Subject(string n_subject);
	void Set_Time(int n_time);

	string Get_Subject() const;
	int Get_Time() const;
	virtual void show() const;
	virtual ~Trial();
};
