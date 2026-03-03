// this class inhearets from the team class
#pragma once
#include <iostream>
#include "team.h"
using namespace std;
class Basketball : public teams
{
	void Set_Court_type(string);
	string Get_Court_type();

	void train();
	void playMatch();
};



