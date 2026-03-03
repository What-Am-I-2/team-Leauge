// this class inhearets from the team class
#pragma once
#include <iostream>
#include "team.h"
using namespace std;
class Football : public teams
{
	void setFormation(string);
	string getFormation();

	void train();
	void playMatch();
};

