#include "Basketball.h"

int High_Score;

//unique functions for basketball
void Set_High_Score(int New_High_Score)
{
	High_Score = New_High_Score;
}

int Get_High_Score()
{
	return High_Score;
}

//unique messages
void Basketball_train() { cout << "Basketball traning" << endl; }
void Basketball_playMatch() { cout << "Basketball match played" << endl; }

