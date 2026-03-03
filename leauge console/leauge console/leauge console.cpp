
#include "team.h"
#include "Football.h"
#include "Basketball.h"
#include <iostream>
using namespace std;



// team creation area 
void Team_create()
{
    
    
        teams team;
        string Team_N;
        string Coach_N;
        int Rank;


        cout << "Welcome to the team creation pannel, please chose a name\n";
        cin >> Team_N;

        cout << "Now please chose a coach\n";
        cin >> Coach_N;


        cout << "Finaly please chose a Rank\n";
        cin >> Rank;




        //sets the inputed information
        team.Set_Team_Name(Team_N);
        team.Set_Coach_Name(Coach_N);
        team.Set_Ranking(Rank);
    

}

//creates football team
void football_Create()
{
    
    Football Football_team;
    string Team_N;
    string Coach_N;
    string MVP;
    int Rank;


    cout << "Welcome to the football team creation pannel, please chose a name\n";
    cin >> Team_N;

    cout << "Now please chose a coach\n";
    cin >> Coach_N;


    cout << "please chose a Rank\n";
    cin >> Rank;

    cout << "Finaly please chose your teams MVP" << endl;
    cin >> MVP;

    //sets the inputed information
    Football_team.Set_Team_Name(Team_N);
    Football_team.Set_Coach_Name(Coach_N);
    Football_team.Set_Ranking(Rank);
    Football_team.Set_MVP(MVP);
    
    
    
    

   
}

//create Basketball
void Basketball_Create()
{

    Basketball Basketball_team;
    string Team_N;
    string Coach_N;
    int High_Score;
    int Rank;


    cout << "Welcome to the Basketball team creation pannel, please chose a name\n";
    cin >> Team_N;

    cout << "Now please chose a coach\n";
    cin >> Coach_N;


    cout << "please chose a Rank\n";
    cin >> Rank;

    cout << "Finaly please set your teams HighScore" << endl;
    cin >> High_Score;

    //sets the inputed information
    Basketball_team.Set_Team_Name(Team_N);
    Basketball_team.Set_Coach_Name(Coach_N);
    Basketball_team.Set_Ranking(Rank);
    Basketball_team.Set_High_Score(High_Score);





}


//main page
int main()
{   //primitive way of having a constant loop
    bool main_menu_Lock = true;


    while (main_menu_Lock == true)
    {
        int console_choice;
        cout << "Hello to leauge console!\n please select an option below \n 1. create a generic team\n 2.create a football team \n 3. create a basketball team \n";
        cin >> console_choice;

        switch (console_choice)
        {
        case 1:
            Team_create();
            break;
        case 2:
            football_Create();
            break;
        case 3:
            Basketball_Create();
            break;
        }
    

    }

}


