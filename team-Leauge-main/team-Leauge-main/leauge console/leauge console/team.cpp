#include "team.h"
#include <iostream>
using namespace std;

//get functions
string teams::Get_Team_Name()
{
	cout << Team_Name << endl;
	return Team_Name;
}

string teams::Get_Coach_Name()
{
	cout << Coach_Name << endl;
	return Coach_Name;
	
	
}

int teams::Get_Ranking()
{
	return Ranking;
}

//set functions
string teams::Set_Team_Name(string Name)
{
	Team_Name = Name; 
	return Team_Name;
}

string teams::Set_Coach_Name(string Coach)
{
	Coach_Name = Coach; 
	return Coach_Name;
}

int teams::Set_Ranking(int rank)
{
	Ranking = rank; 
	return Ranking;
}


//work in progress still
void teams::Train() { cout << Team_Name << "trained" << endl; }
//work in progress still
void teams::Play_Match() { cout << Team_Name << "Played" << endl; }
