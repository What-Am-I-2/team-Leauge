#include "Basketball.h"

string Court_type;
void Set_Court_type(string New_court_type)
{
	Court_type = New_court_type;
}

string Get_Court_type()
{
	return Court_type;
}

void train() { cout << "Basketball traning" << endl; }
void playMatch() { cout << "Basketball match played" << endl; }

