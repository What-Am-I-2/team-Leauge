#include "Football.h"

string Formation;
void setFormation(string newformation)
{
	Formation = newformation;
}

string getFormation()
{
	return Formation;
}

void train() { cout << "football traning" << endl; }
void playMatch(){ cout << "football match played" << endl; }
