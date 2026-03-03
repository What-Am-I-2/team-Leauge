#pragma once
#include <iostream>
using namespace std;

class teams
{
protected:
	string Team_Name;
	string Coach_name;
	int Ranking;
public:

	string Get_Team_Name();

	string Get_Coach_Name();

	int Get_Ranking();

	string  Set_Team_Name(string);

	string  Set_Coach_Name(string);

	int Set_Ranking(int);

	void Train();

	void Play_Match();


};
