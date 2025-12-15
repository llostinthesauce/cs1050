/*****************************************************************************
 * Lab 11
 * CS1050
 * Spring 2023, April 21, 2023
 * Starter Code by Jim Ries
 * Remaining Code by 
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

// given structure definitions

struct _Team
{
    char city[256];
    char name[256];
};
typedef struct _Team Team;

struct _Player
{
    char firstName[256];
    char lastName[256];
    long salary;
    Team team;
};
typedef struct _Player Player;

// original functions

void lastNameSort(Player players[], int s) // compares struct.lastName using strcmp and makes swap if needed using bubble sort
{
    Player temp;

    for (int i = 0; i < s; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            if (strcmp(players[i].lastName, players[j].lastName) > 0)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;

            }
        }
    }
}

void firstNameSort(Player players[], int s) // using identical logic from above, but for first name using bubble sort
{
    Player temp;

    for (int i = 0; i < s; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            if (strcmp(players[i].firstName, players[j].firstName) > 0)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
}

void salarySort(Player players[], int s) //s ame as above but for salary using bubble sort
{
    Player temp;

    for (int i = 0; i < s; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            if (players[i].salary > players[j].salary)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
}

void printArray(Player players[], int s) // simple printarray function that calls each aspect of struct using . and proper spacing with \t
{
    printf("%20s%24s%24s%24s%24s\n", "First Name", "Last Name", "Salary", "City", "Team");
    for (int i = 0; i < s; i++)
    {
        printf("%20s\t%20s\t%20ld\t%20s\t%20s\n", players[i].firstName, players[i].lastName, players[i].salary, players[i].team.city, players[i].team.name);

    }
}

// main

 int main(void)
 {
    Player players[] =
    {
        {"Corey","Seager",32500000,{"Texas","Rangers"}},
        {"Stephen","Strasburg",35000000,{"Washington","Nationals"}},
        {"Gerrit","Cole",36000000, {"New York","Yankees"}},
        {"Mike","Trout",35500000, {"Los Angeles","Angels"}},
        {"Carlos","Correa",35100000,{"Minnesota","Twins"}},
        {"Anthony","Rendon",35000000,{"Los Angeles","Angels"}},
        {"Francisco","Lindor",34100000,{"New York","Mets"}},
        {"Trevor","Bauer",34000000,{"Los Angeles","Dodgers"}},
        {"Nolan","Arenado",32500000,{"St. Louis","Cardinals"}},
        {"Max","Scherzer",43300000,{"New York","Mets"}},
    };

    int size = sizeof(players)/sizeof(players[0]); //defines size of full struct

    printf("%s\n", "Players: ");
    printArray(players, size); //prints unaltered struct

    lastNameSort(players, size);
    printf("%s\n", "\nPlayers by Last Name: ");
    printArray(players, size); //prints sorted by last

    firstNameSort(players, size);
    printf("%s\n", "\nPlayers by First Name: ");
    printArray(players, size); //prints sorted by first

    salarySort(players, size);
    printf("%s\n", "\nPleyrs by Salary: ");
    printArray(players, size); //prints sorted by salary
 }                                                                                                                                                   130,2         Bo
