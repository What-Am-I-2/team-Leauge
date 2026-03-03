#include "team.h"
#include <iostream>
using namespace std;

string Team_Name;
string Coach_Name;
int Ranking;



string teams::Get_Team_Name()
{
	return Team_Name;
}

string teams::Get_Coach_Name()
{
	return Coach_name;
}

int teams::Get_Ranking()
{
	return Ranking;
}

string teams::Set_Team_Name(string Name)
{
	Team_Name = Name; return Team_Name;
}

string teams::Set_Coach_Name(string Coach)
{
	Coach_name = Coach; return Coach_Name;
}

int teams::Set_Ranking(int rank)
{
	Ranking = rank; return Ranking;
}

//work in progress
void teams::Train() {}
//work in progress
void teams::Play_Match() {}
