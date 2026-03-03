// goal make bare bones, build array, fill in gaps 
#include "team.h"
#include <iostream>
using namespace std;



// team creation area 
void Team_create()
{
    teams team;
    string Team_N;
    string Coach_N;
    int Rank;


    cout << "Welcome ot the team creation pannel, please chose a name\n";
    cin >> Team_N;

    cout << "Now please chose a coach\n";
    cin >> Coach_N;


    cout << "Finaly please chose a Rank\n";
    cin >> Rank;





    team.Set_Team_Name(Team_N);
    team.Set_Coach_Name(Coach_N);
    team.Set_Ranking(Rank);


}


//main page
int main()
{
    int console_choice;

    cout << "Hello to leauge console!\n please select an option below \n 1. create team\n";
    cin >> console_choice;

    switch (console_choice)
    {
    case 1:
        Team_create();
    }

}

//code will go here
