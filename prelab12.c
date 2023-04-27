 1 /* not working
  2  * CS1050
  3  * Spring 2023, April 25, 2023
  4  * Prelab 12
  5  * by Corbin Shanks
  6  */
  7 #include <stdio.h>
  8 
  9 // Symbolic Constants
 10 #define FILENAME "DnDMonsterScores.csv"
 11 
 12 // Main
 13 int main(void)
 14 {
 15     FILE * fp;
 16     char name[256];
 17 
 18     char a; //vars for counting lines 
 19     int count = 0;
 20 
 21     int acStorage = 0;
 22     int hpStorage = 0;
 23 
 24     fp = fopen(FILENAME,"r");
 25     if (NULL!=fp)
 26     {
 27         printf("Header line was: Name,AC,HP,STR,DEX,CON,INT,WIS,CHA\n\n");
 28 
 29         for(int x = 0; x < 385; x++)
 30         {
 31             fgets(name,255,fp);
 32             name[255]='\0'; // Can't be too careful NULL-terminating things
 33 
 34             // Variables for each field in the csv file
 35             int ac,hp,str,dex,con,intel,wis,cha;
 36 
 37             // Note that my code just reads the first data line in the CSV.  You will need to 
 38             // read all the lines, right?
 39 
 40             // fscanf() returns the number of fields it successfully read.  We asked for 9, so
 41             // if we didn't get 9, then something must be wrong.  Notice also that the first field is
 42             // "anything but a comma" because the names might have spaces in them.  Notice also
 43             // that I am reusing the name variable.
 44 
 45             if (9==fscanf(fp," %[^,],%d,%d,%d,%d,%d,%d,%d,%d,",name,&ac,&hp,&str,&dex,&con,&intel,&wis,&cha))
 46             {
 47                 printf("%d) ",x+1);
 48                 printf("\"%s\" : AC=%d,HP=%d\n",name,ac,hp);
 49 
 50                 acStorage = acStorage + ac;
 51                 hpStorage = hpStorage + hp;
 52             }
 53 
 54         }
 55 
 56         for (a = getc(fp); a < 385; a = getc(fp))
 57         {
 58             if (a == '\n')
 59             {
 60                 count = count + 1;
 61             }
 62         }
 63 
 64 
 65         printf("\nTotal monster count = %d\n", count);
 66         printf("Average AC = %.2lf\n", acStorage / 384.00);
 67         printf("Average HP = %.2lf\n", hpStorage / 384.00);
 68 
 69     }
 70 
 71     // Make your mama proud and clean up after yourself!
 72     fclose(fp);
 73    }
