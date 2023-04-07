Last login: Thu Apr  6 15:46:50 on ttys000
corbinshanks@mwc-121213 ~ % ssh cwswgv@tc.rnet.missouri.edu
cwswgv@tc.rnet.missouri.edu's password: 
Last login: Thu Apr  6 15:47:11 2023 from 104.143.164.209
* ********************************************************************
* Welcome to clark-r630-login-node907.cobalt.lan, CentOS, 7.9.2009
* Archive of news is available in /etc/motd-archive
* 
* University of Missouri Division of IT Research Computing Support Services
* Use of this system is governed by the rules and regulations of the
* University of Missouri and the University of Missouri System and also
* by requirements of various granting agencies.
*
* Users must be familiar with and abide by the UM System acceptable use
* policy (CRR 110.005) and the UM System Data Classification System (DCL).
* http://umsystem.edu/ums/rules/collected_rules/facilities/ch110
* http://umsystem.edu/ums/is/infosec/classification
*
* Helpful Links
* News:              http://doit.missouri.edu/research/research-computing-news
* Support:           muitrss@missouri.edu
* Announcements:     https://po.missouri.edu/SCRIPTS/wa.exe?SUBED1=RSSHPC-L
* Training and Docs: http://docs.rnet.missouri.edu
* Status:            https://status.missouri.edu
* ********************************************************************
[cwswgv@clark-r630-login-node907 ~]$ cd
[cwswgv@clark-r630-login-node907 ~]$ cd prelabs
[cwswgv@clark-r630-login-node907 prelabs]$ ls
a.out  prelab2.c  prelab3.c  prelab4.c  prelab5.1.c  prelab5.c  prelab6.c  prelab7.c  prelab8.c  prelab9.c  prelabb9.c
[cwswgv@clark-r630-login-node907 prelabs]$ vim prelab9.c


























  1 #include<stdio.h>
  2 
  3 void getString(char * a)
  4 {
  5     printf("Enter a string: ");
  6     scanf("%s", a);
  7     printf("You entered: %s\n", a);
  8 }
  9 
 10 int numChars(char * a)
 11 {
 12     int count = 0;
 13     for (int i = 0; *(a+1) != '\0'; i++)
 14         {
 15             count++;
 16         }
 17 
 18     return count;
 19 }
 20 
 21 void reverseString(char * array)
 22 {
 23     char temp;
 24     int l = numChars(a);
 25 
 26     for (int i = 0; i < (1/2); i++)
 27     {
 28         temp = *(a+l);
 29         *(a+l) = *(a+l-i-l);
 30         *(a+l-i-l) = temp;
 31     }
 32 
 33     printf("String Backwards: %s\n", a);
 34 }
 35 
 36 /////////////////////////////////////////////////
 37 
 38 
 39 
 40 int main(void)
 41 {
 42     int length = 256;
 43     char a[length];
 44 
 45     printf("Welcome to Prelab 9!\n");
 46     getString(a);
 47     printf("%d\n", numChars(a),
 48     reverseString(a);
 49 
 50 }
~                                                                                                                                    
~                                                                                                                                    
~                                                                                                                                    
~                                                                                                                                    
~                                                                                                                                    
"prelab9.c" 50L, 764C                                                                                              50,1          All
