#include "Football.h"

string MVP;

//unique functions for football
void Set_MVP(string New_MVP)
{
	MVP = New_MVP;
}

string Get_MVP()
{
	return MVP;
}

//unique messagess for footbal
void Football_train() { cout << "football traning" << endl; }
void Football_playMatch(){ cout << "football match played" << endl; }
