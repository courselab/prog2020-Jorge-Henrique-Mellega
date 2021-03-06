/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a, int *b, int *c)
{
  int sa,sb,sc;
  if(*a>*b){
    if(*a<*c){
      sb = *a;
      sa = *b;
      sc = *c;
    }else{
      sc = *a;
      if(*b>*c){
        sb = *b;
        sa = *c;
      }else{
        sa = *b;
        sb = *c;
      }
    }
  }else{
    if(*a<*c){
      sa = *a;
      if(*b<*c){
        sb = *b;
        sc = *c;
      }else{
        sc = *b;
        sb = *c;
      }
    }else{
      sb = *a;
      sc = *b;
      sa = *c;
    }
  }
  *a = sa;
  *b = sb;
  *c = sc;
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
