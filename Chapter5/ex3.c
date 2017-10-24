#include <stdio.h>

/* strcat original: concatenate t to the end of s; s must be big enough */
void strcat(char s[], char t[])
{
  int i, j;
  i = j = 0;
  while (s[i] != '\0') /* find end of s */
    i++;
  while ((s[i++] = t[j++]) != '\0') /* copy t */
    ;
}

/* new strcat: write a pointer version of the above function */
void strcat2(char *s, char *t)
{
  char *z = s;
  char *y = t;
  while (*z != '\0')
  {
    z++;
  }
  z--; /* go back to the '\0' char */
  while ((*z = *y) != '\0')
  {
    z++;
    y++;
  }
}
