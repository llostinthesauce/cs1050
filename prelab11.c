  1 /*****************************************************************************
  2  * Prelab 11
  3  * CS1050
  4  * Spring 2023
  5  * Start Code by Jim Ries
  6  * Functions by Corbin Shanks
  7  *****************************************************************************/
  8 #include <stdio.h>
  9 #include <string.h>
 10 
 11 struct _Movie
 12 {
 13     char title[256];
 14     long gross;
 15     int year;
 16 };
 17 typedef struct _Movie Movie;
 18 
 19 void bubbleSort();
 20 void printArray();
 21 
 22 void bubbleSort(Movie movies[], int s)
 23 {
 24     char temp[100];
 25     for (int i = 0; i < s; i++)
 26     {
 27         for (int j = i + 1; j < s; j++)
 28         {
 29             if (strcmp(movies[i].title, movies[j].title) > 0) {
 30                 strcpy(temp, movies[i].title);
 31                 strcpy(movies[i].title, movies[j].title);
 32                 strcpy(movies[j].title, temp);
 33             }
 34         }
 35     }
 36 }
 37 
 38 void printArray(Movie movies[], int s)
 39 {
 40     printf("%28s%32s%32s\n", "Title", "Gross", "Year");
 41     for (int i = 0; i < s; i++)
 42     {
 43         printf("%28s\t%28ld\t28%d\n", movies[i].title, movies[i].gross, movies[i].year);
 44     }
 45 }
 46 
 47 int main(void)
 48 {
 49     Movie movies[] =
 50     {
 51         {"Gone_with_the_Wind", 3713000000, 1939},
 52         {"Avatar", 3263000000, 2009},
 53         {"Titanic", 3087000000, 1997},
 54         {"Star_Wars", 3049000000, 1977},
 55         {"Avengers:_Endgame", 2798000000, 2019},
 56         {"The_Sound_of_Music", 2554000000, 1965},
 57         {"E.T._the_Extra-Terrestrial", 2493000000, 1982},
 58         {"The_Ten_Commandments", 2361000000, 1956},
 59         {"Doctor_Zhivago", 2238000000, 1965},
 60         {"Star_Wars:_The_Force_Awakens", 2206000000, 2015},
 61         {"Snow_White", 2150000000, 1937},
 62         {"Jurassic_Park", 2100000000, 1993},
 63         {"Jaws", 2100000000, 1975},
 64         {"Avengers:_Infinity_War", 2050000000, 2018},
 65         {"The_Exorcist", 2000000000, 1973},
 66     };
 67 
 68     int size = sizeof(movies)/sizeof(movies[0]);
 69     printArray(movies, size);
 70     bubbleSort(movies, size);
 71     printf("\n\nMovies in Alphabetical order:\n");
 72     printArray(movies, size);
 73 }
