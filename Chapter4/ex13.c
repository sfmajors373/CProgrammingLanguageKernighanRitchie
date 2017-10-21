/* make a recursive version of reverse(s) that reverses a string in place */
#include <stdio.h>
#include <string.h>

/* reverse: iterative version from pg 62 */
void reverse(char s[])
{
    int c, i , j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void reverser(char s[])
{
    void recurseReverse(char s[], int i, int len);
    reverseRecurse(s, 0, strlen(s));
}

void recurseReverse(char s[], int i, int len)
{
   int c, j; 
   j = len - (i +1);

   if (i < j)
   {
      c = s[i];
      s[i] = s[j];
      s[j] = c;
      reverseRecurse(s, ++i, len);
   }
}
