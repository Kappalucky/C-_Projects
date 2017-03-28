//Program HW_3.cpp
//reads in multiple baseball team stats from file
//compute baseball statistics
//computes win-lose records of teams
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
void totalgames(int, int);
void percentage(int, int, int);
int main()
{
    int team_id;
    int wins;
    int losses;
    string line;
    int teamcount = 0;
    ifstream teamdata("C:\\Users\\User\\Documents\\Visual Studio Code\\programs\\infiles\\teams.dat");
    if (teamdata.is_open())
    {
        do
        {
            teamdata >> team_id;
            teamdata >> wins;
            teamdata >> losses;
            cout << "Team I.D.: " << team_id << '\n';
            cout << wins << " wins" << '\t' << losses << " losses" << '\n';
            totalgames(wins, losses);
            cout << '\n'<< '\n';
            teamcount++;

        }
        while(getline(teamdata, line));

        cout << "Total teams in league: " << teamcount << '\n';
        cout << "Team program is complete!" << '\n';
        teamdata.close();
    }
    else
    {
        cout << "File Unavailable";
        return 0;
    }
}

//Function totalgames:
//Input:
//  win - Total wins for the season based on team
//  loss - Total losses for the season based on team
//Process:
//  Calculate games left using win & loss
//  Calculate games played using win & loss
//  calls function to determine percentages
//output:
//  prints games played
//  prints games left or if season is finished
void totalgames(int win, int loss)
{
    int gamesplayed = win + loss;
    int gamesleft = 20 - gamesplayed;

    cout << "Total number of games played is " << gamesplayed << '\n';

    if (gamesplayed == 20)
    {
        cout << "The season is finished" << '\n';
    }
    else if (gamesplayed < 20)
    {
        if(gamesleft == 1)
        {
            cout << "There is " << gamesleft << " game left" << '\n';
        }
        else
        {
            cout << "There are " << gamesleft << " games left" << '\n';
        }
    }
    else
    {
        cout << "There should not be more than 20 games played, check data";
    }
    percentage(win, loss, gamesplayed);
    return;
}


//Function percentage:
//Input:
//  win - Total wins for the season based on team
//  loss - Total losses for the season based on team
//  gamesplayed - Total wins + Total losses
//Process:
//  calculates winning percentage from wins & gamesplayed
//  determines if team is above or below 0.50000
//output:
//  prints team's winning percentage
//  prints team above or below 0.50000
void percentage(int win, int loss, int gamesplayed)
{
    double winpercentage = (double) win / gamesplayed;
    int aboveorbelow;
    cout << "Team's Winning Percentage: " << fixed << setprecision(5) << winpercentage << '\n';

//above or below 0.50000

    if(win > loss || win == loss)
    {
        aboveorbelow = win - loss;
        cout << "The team is " << aboveorbelow << " games above 0.50000" << '\n';
    }
    else
    {
        aboveorbelow = loss - win;
        cout << "The team is " << aboveorbelow << " games below 0.50000" << '\n';
    }
    return;
}
