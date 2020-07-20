/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname(char* s)
{
    int c=0,lC=0, nC = 0;
    char last[MAX];
    while(s[c]!='\0'){
        last[lC] = s[c];
        if(s[c] == ' '){
            lC = 0;
        }else{
            lC++;
        }
        c++;
    }
    nC = c - lC ;
    c = 1;
    last[lC-1] = ',';
    last[lC] = ' ';
    while(c < nC){
        last[c+lC] = s[c-1];
        c++;
    }
    c = 0;
    int ci;
    while(c < lC){
        ci = (int)last[c];
        if(ci > 96 && ci < 123){
            ci = ci - 32;
        }
        last[c] = (char)ci;
        c++;
    }
    c = 0;
    while(s[c] != '\0'){
        s[c] = last[c];
        c++;
    }
}


/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
