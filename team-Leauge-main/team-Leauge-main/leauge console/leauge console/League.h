#pragma once
#include <iostream>
#include "team.h"
#include "Football.h"
#include "Basketball.h"
#include <vector>
#include <utility>
using namespace std;



class Leauge
{
private:
	string Leauge_Name;
	string Top_Team;

	vector<pair<string, teams*>> teams_leauge;
	vector<pair<string, Football*>> Football_leauge;
	vector<pair<string, Basketball*>> Basketball_leauge;

public:
	string Set_Leauge_Name(string);
	string Set_Top_Team(string);
	string Get_Leauge_Info();

	void Add_Team_To_Team(teams* team);
	void Remove_Team_From_Team(teams* team);
	void Display_Teams_In_Team();

	void Add_Football_To_Team(Football* team);
	void Remove_Football_From_Team(Football* team);
	void Display_Football_In_Team();

	void Add_Basketball_To_Team(Basketball* team);
	void Remove_Basketball_From_Team(Basketball* team);
	void Display_Basketball_In_Team();






};

