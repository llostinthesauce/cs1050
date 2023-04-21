  1 /*****************************************************************************
  2  * Lab 11
  3  * CS1050
  4  * Spring 2023, April 21, 2023
  5  * Starter Code by Jim Ries
  6  * Remaining Code by Corbin Shanks
  7  *****************************************************************************/
  8 #include <stdio.h>
  9 #include <string.h>
 10 
 11 // given structure definitions
 12 
 13 struct _Team
 14 {
 15     char city[256];
 16     char name[256];
 17 };
 18 typedef struct _Team Team;
 19 
 20 struct _Player
 21 {
 22     char firstName[256];
 23     char lastName[256];
 24     long salary;
 25     Team team;
 26 };
 27 typedef struct _Player Player;
 28 
 29 // original functions
 30 
 31 void lastNameSort(Player players[], int s) // compares struct.lastName using strcmp and makes swap if needed using bubble sort
 32 {
 33     Player temp;
 34 
 35     for (int i = 0; i < s; i++)
 36     {
 37         for (int j = i + 1; j < s; j++)
 38         {
 39             if (strcmp(players[i].lastName, players[j].lastName) > 0)
 40             {
 41                 temp = players[i];
 42                 players[i] = players[j];
 43                 players[j] = temp;
 44 
 45             }
 46         }
 47     }
 48 }
 49 
 50 void firstNameSort(Player players[], int s) // using identical logic from above, but for first name using bubble sort
 51 {
 52     Player temp;
 53 
 54     for (int i = 0; i < s; i++)
 55     {
 56         for (int j = i + 1; j < s; j++)
 57         {
 58             if (strcmp(players[i].firstName, players[j].firstName) > 0)
 59             {
 60                 temp = players[i];
 61                 players[i] = players[j];
 62                 players[j] = temp;
 63             }
 64         }
 65     }
 66 }
 67 
 68 void salarySort(Player players[], int s) //s ame as above but for salary using bubble sort
 69 {
 70     Player temp;
 71 
 72     for (int i = 0; i < s; i++)
 73     {
 74         for (int j = i + 1; j < s; j++)
 75         {
 76             if (players[i].salary > players[j].salary)
 77             {
 78                 temp = players[i];
 79                 players[i] = players[j];
 80                 players[j] = temp;
 81             }
 82         }
 83     }
 84 }
 85 
 86 void printArray(Player players[], int s) // simple printarray function that calls each aspect of struct using . and proper spacing with \t
 87 {
 88     printf("%20s%24s%24s%24s%24s\n", "First Name", "Last Name", "Salary", "City", "Team");
 89     for (int i = 0; i < s; i++)
 90     {
 91         printf("%20s\t%20s\t%20ld\t%20s\t%20s\n", players[i].firstName, players[i].lastName, players[i].salary, players[i].team.city, players[i].team.name);
 92 
 93     }
 94 }
 95 
 96 // main
 97 
 98  int main(void)
 99  {
100     Player players[] =
101     {
102         {"Corey","Seager",32500000,{"Texas","Rangers"}},
103         {"Stephen","Strasburg",35000000,{"Washington","Nationals"}},
104         {"Gerrit","Cole",36000000, {"New York","Yankees"}},
105         {"Mike","Trout",35500000, {"Los Angeles","Angels"}},
106         {"Carlos","Correa",35100000,{"Minnesota","Twins"}},
107         {"Anthony","Rendon",35000000,{"Los Angeles","Angels"}},
108         {"Francisco","Lindor",34100000,{"New York","Mets"}},
109         {"Trevor","Bauer",34000000,{"Los Angeles","Dodgers"}},
110         {"Nolan","Arenado",32500000,{"St. Louis","Cardinals"}},
111         {"Max","Scherzer",43300000,{"New York","Mets"}},
112     };
113 
114     int size = sizeof(players)/sizeof(players[0]); //defines size of full struct
115 
116     printf("%s\n", "Players: ");
117     printArray(players, size); //prints unaltered struct
118 
119     lastNameSort(players, size);
120     printf("%s\n", "\nPlayers by Last Name: ");
121     printArray(players, size); //prints sorted by last
122 
123     firstNameSort(players, size);
124     printf("%s\n", "\nPlayers by First Name: ");
125     printArray(players, size); //prints sorted by first
126 
127     salarySort(players, size);
128     printf("%s\n", "\nPleyrs by Salary: ");
129     printArray(players, size); //prints sorted by salary
130  }                                                                                                                                                   130,2         Bo
