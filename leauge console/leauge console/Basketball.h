// this class inhearets from the team class
#pragma once
#include <iostream>
#include "team.h"
using namespace std;

class Basketball : public teams
{


public:
	void Set_High_Score(int);
	int Get_High_Score();
	void Basketball_train();
	void Basketball_playMatch();
};



