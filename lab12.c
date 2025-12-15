/*****************************************************************************
 * Lab 12
 * Spring 2023
 * by  
 * April 28, 2023
 *****************************************************************************/

#include <stdio.h>
#include <string.h>
#include "fight.h"

#define FILENAME "monster.csv"

// Main
int main(int argc, char * argv[])
{
    //SetSeed(0);
    
    FILE * fp;

    fp = fopen(FILENAME, "r"); //opens file and sets to read
    if (NULL != fp)
    {
        printf("**** Combat between Ogre Zombie and Ahote ****\n\n");

        for(int x = 0; x < 50; x++) // for loop that looks at all data in the file
        {
            char name[256];
            char str1[256];
            char str2[256];
            int ac, hp, hitbonus; //vars defined by data file
            

            if(6==fscanf(fp, "%[^,], %d, %d, %d, %[^,], %s", name, &ac, &hp, &hitbonus, str1, str2)) //if fscanf takes 6 inputs then it reads data
            {
                printf("Name = %s, AC = %d, HP = %d, Bonus = %d, Att1 = %s, Att2 = %s\n", name, ac, hp, hitbonus, str1, str2); //added this printf to see values

            //    if (&name[256] == 'Ogre Zombie')
                {
                struct _Combatant OgreZombie; //defines combatant type and sets values accordingly
                strcpy(OgreZombie.name, name);
                OgreZombie.ac = ac;
                OgreZombie.hp = hp;
                OgreZombie.hitbonus = hitbonus;
                strcpy(OgreZombie.attack1damage, str1);
                strcpy(OgreZombie.attack2damage, str2);
                }
                
         //      if (&name[256] == 'Ahote')
               {
               struct _Combatant Ahote; //defines combatant types and sets values accordingly
               strcpy(Ahote.name, name);
               Ahote.ac = ac;
               Ahote.hp = hp;
               Ahote.hitbonus = hitbonus;
               strcpy(Ahote.attack1damage, str1);
               strcpy(Ahote.attack2damage, str2);
               }

              // Fight(OgreZombie, Ahote); //no matter what I did, I kept getting undefined errors with Fight function. if it is uncommented nothing compiles
                
            
            }
        }
    }

    
    
    fclose(fp); //closes file
}
