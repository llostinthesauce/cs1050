  1 /*
  2  * CS1050
  3  * Spring 2023
  4  * Prelab 10 Starter File
  5  * by Jim Ries
  6  */
  7 
  8 // includes
  9 #include <stdio.h>
 10 #include <ctype.h>
 11 
 12 // Symbolic Constants
 13 #define S1 "I'm not cool and I'm not smart and I can't even parallel park."
 14 #define S2 "\n\n\tMommy's alright.  \t Daddy's alright.  They just seem a little weird.\n\n"
 15 #define S3 "Every cheap hood strikes a bargain with the world.  Ends up making payments on a sofa or a girl."
 16 #define S4 "Now some guys they just give up living.  And start dying little by little, piece by piece.      "
 17 #define STRINGCOUNT 4
 18 
 19 ////////////////
 20 // Prototypes //
 21 ////////////////
 22 
 23 // KillWhiteSpace should take a string, remove the whitespace from that string in-place,
 24 // and return a pointer to the beginning of the resultant string (which really should
 25 // be the same thing that was passed in originally - i.e., s).
 26 char * KillWhiteSpace(char *s)
 27 {
 28     int n = 0;
 29 
 30     for (int i = 0; *(s + i) != '\0'; i++)
 31     {
 32         int c = *(s + i);
 33         if(isspace(c) == 0)
 34         {
 35             *(s + n) = *(s + i);
 36             n++;
 37         }
 38     }
 39     *(s + n) = '\0';
 40     return s;
 41 }
 42 
 43 // Main
 44 int main(void)
 45 {
 46     char s[STRINGCOUNT][256]=
 47     {
 48         S1,S2,S3,S4
 49     };
 50 
 51     printf("**** Original Strings ****\n");
 52     for (int i=0;i<STRINGCOUNT;i++)
 53     {
 54         printf("#%d: %s\n",i,s[i]);
 55     }
 56 
 57     printf("\n\n**** Strings without whitespace ****\n");
 58     for (int i=0;i<STRINGCOUNT;i++)
 59     {
 60         printf("#%d: %s\n",i,KillWhiteSpace(s[i]));
 61     }
 62 }
