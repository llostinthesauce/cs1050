/* not working
 * CS1050
 * Spring 2023, April 25, 2023
 * Prelab 12
 * by 
 */
#include <stdio.h>

// Symbolic Constants
#define FILENAME "DnDMonsterScores.csv"

// Main
int main(void)
{
    FILE * fp;
    char name[256];

    char a; //vars for counting lines 
    int count = 0;

    int acStorage = 0;
    int hpStorage = 0;

    fp = fopen(FILENAME,"r");
    if (NULL!=fp)
    {
        printf("Header line was: Name,AC,HP,STR,DEX,CON,INT,WIS,CHA\n\n");

        for(int x = 0; x < 385; x++)
        {
            fgets(name,255,fp);
            name[255]='\0'; // Can't be too careful NULL-terminating things

            // Variables for each field in the csv file
            int ac,hp,str,dex,con,intel,wis,cha;

            // Note that my code just reads the first data line in the CSV.  You will need to 
            // read all the lines, right?

            // fscanf returns the number of fields it successfully read.  We asked for 9, so
            // if we didn't get 9, then something must be wrong.  Notice also that the first field is
            // "anything but a comma" because the names might have spaces in them.  Notice also
            // that I am reusing the name variable.

            if (9==fscanf(fp," %[^,],%d,%d,%d,%d,%d,%d,%d,%d,",name,&ac,&hp,&str,&dex,&con,&intel,&wis,&cha))
            {
                printf("%d) ",x+1);
                printf("\"%s\" : AC=%d,HP=%d\n",name,ac,hp);

                acStorage = acStorage + ac;
                hpStorage = hpStorage + hp;
            }

        }

        for (a = getc(fp); a < 385; a = getc(fp))
        {
            if (a == '\n')
            {
                count = count + 1;
            }
        }


        printf("\nTotal monster count = %d\n", count);
        printf("Average AC = %.2lf\n", acStorage / 384.00);
        printf("Average HP = %.2lf\n", hpStorage / 384.00);

    }

    // Make your mama proud and clean up after yourself!
    fclose(fp);
   }
