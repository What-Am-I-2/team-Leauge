#include "League.h"
#include "team.h"
#include "Football.h"
#include "Basketball.h"
#include <iostream>
#include <utility>
using namespace std;





string Leauge::Set_Leauge_Name(string New_Leauge)
{
	Leauge_Name = New_Leauge;
}

string Leauge::Set_Top_Team(string New_top_team)
{
	Top_Team = New_top_team;
}

string  Leauge::Get_Leauge_Info()
{
	cout << "Leauge Name: " << Leauge_Name << endl;
}

void Leauge::Add_Team_To_Team(teams* team)
{
	string Name = team->Get_Team_Name();
	teams_leauge.push_back({ Name,team });
	cout << "Team " << Name << " added to leauge" << endl;
}
void Leauge::Remove_Team_From_Team(teams* team)
{
	// work in progress will get it done by next week
}
void Leauge::Display_Teams_In_Team()
{
	for(int i =0; i < teams_leauge.size(); i++)
	{
		cout << "Team Name: " << teams_leauge[i].first << endl;
	}
}

void Leauge::Add_Football_To_Team(Football* team){
	string Name = team->Get_Team_Name();
	Football_leauge.push_back({ Name,team });
	cout << "Team " << Name << " added to football leauge" << endl;
}
void Leauge::Remove_Football_From_Team(Football* team){
	// work in progress will get it done by next week
}
void Leauge::Display_Football_In_Team(){
	for(int i =0; i < Football_leauge.size(); i++)
	{
		cout << "Team Name: " << Football_leauge[i].first << endl;
	}
}

void Leauge::Add_Basketball_To_Team(Basketball* team)
{
	string Name = team->Get_Team_Name();
	Basketball_leauge.push_back({ Name,team });
	cout << "Team " << Name << " added to basketball leauge" << endl;
}
void Leauge::Remove_Basketball_From_Team(Basketball* team)
{
	// work in progress will get it done by next week
}
void Leauge::Display_Basketball_In_Team()
{
	for(int i =0; i < Basketball_leauge.size(); i++)
	{
		cout << "Team Name: " << Basketball_leauge[i].first << endl;
	}
}
				

