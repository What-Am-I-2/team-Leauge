#include "Football.h"

string MVP;

//unique functions for football
void Football::Set_MVP(string New_MVP)
{
	MVP = New_MVP;
}

string Football::Get_MVP()
{
	return MVP;
}

//unique messagess for footbal
void Football::Football_train() { cout << "football traning" << endl; }
void Football::Football_playMatch(){ cout << "football match played" << endl; }
