#include <stdio.h>
#include <string.h>


int strend(char *s, char *t);

int main()
{
  char *s;
  char *t;
  int ans;
  printf("Enter string: ");
  scanf("%s", &s);
  
  printf("Enter possible substring: ");
  scanf("%s", &t);

  printf("I can still print");
  printf("Your strings are %s and %s\n", s, t);

  ans = strend(s, t);

  printf("Wws your substring in the string? %i\n", ans);
}

/* strend: returns 1 if string t at end of str s, and 0 otherwise */
int strend(char *s, char *t)
{
  int length = (int)strlen(t);
  while (*s != '\0')
  {
    s++;
  }
  s--; /* return to '\0' spot */
  for (int i = 0; i <= length; i++)
  {
    s--; /* return to where t would start */
  }
  while (*s != '\0')
  {
    if (s == t)
    {
      s++;
      t++;
    }
    else
    {
      return 0;
    }
  }
  return 1;
}
