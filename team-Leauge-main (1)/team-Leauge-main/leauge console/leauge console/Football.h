// this class inhearets from the team class
#pragma once
#include <iostream>
#include "team.h"
using namespace std;
class Football : public teams
{
private:


 public:
	void Set_MVP(string);
	string Get_MVP();
	void train();
	void playMatch();
};

