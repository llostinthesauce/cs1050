  1 /*****************************************************************************
  2  * Lab 12
  3  * Spring 2023
  4  * by Corbin Shanks (cwswgv)
  5  * April 28, 2023
  6  *****************************************************************************/
  7 
  8 #include <stdio.h>
  9 #include <string.h>
 10 #include "fight.h"
 11 
 12 #define FILENAME "monster.csv"
 13 
 14 // Main
 15 int main(int argc, char * argv[])
 16 {
 17     //SetSeed(0);
 18     
 19     FILE * fp;
 20 
 21     fp = fopen(FILENAME, "r"); //opens file and sets to read
 22     if (NULL != fp)
 23     {
 24         printf("**** Combat between Ogre Zombie and Ahote ****\n\n");
 25 
 26         for(int x = 0; x < 50; x++) // for loop that looks at all data in the file
 27         {
 28             char name[256];
 29             char str1[256];
 30             char str2[256];
 31             int ac, hp, hitbonus; //vars defined by data file
 32             
 33 
 34             if(6==fscanf(fp, "%[^,], %d, %d, %d, %[^,], %s", name, &ac, &hp, &hitbonus, str1, str2)) //if fscanf takes 6 inputs then it reads data
 35             {
 36                 printf("Name = %s, AC = %d, HP = %d, Bonus = %d, Att1 = %s, Att2 = %s\n", name, ac, hp, hitbonus, str1, str2); //added this printf to see values
 37 
 38             //    if (&name[256] == 'Ogre Zombie')
 39                 {
 40                 struct _Combatant OgreZombie; //defines combatant type and sets values accordingly
 41                 strcpy(OgreZombie.name, name);
 42                 OgreZombie.ac = ac;
 43                 OgreZombie.hp = hp;
 44                 OgreZombie.hitbonus = hitbonus;
 45                 strcpy(OgreZombie.attack1damage, str1);
 46                 strcpy(OgreZombie.attack2damage, str2);
 47                 }
 48                 
 49          //      if (&name[256] == 'Ahote')
 50                {
 51                struct _Combatant Ahote; //defines combatant types and sets values accordingly
 52                strcpy(Ahote.name, name);
 53                Ahote.ac = ac;
 54                Ahote.hp = hp;
 55                Ahote.hitbonus = hitbonus;
 56                strcpy(Ahote.attack1damage, str1);
 57                strcpy(Ahote.attack2damage, str2);
 58                }
 59 
 60               // Fight(OgreZombie, Ahote); //no matter what I did, I kept getting undefined errors with Fight function. if it is uncommented nothing compiles
 61                 
 62             
 63             }
 64         }
 65     }
 66 
 67     
 68     
 69     fclose(fp); //closes file
 70 }
