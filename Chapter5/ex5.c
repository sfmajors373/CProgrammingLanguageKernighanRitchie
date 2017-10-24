#include <stdio.h>

char *mystrncpy(char *s, char *ct, int n);
char *mystrncat(char *s, char *ct, int n);

/* make a version of the string library's strncpy and strncat */

int main()
{
  char *s;
  char *ss;
  char *ct;
  int n;

  printf("Please enter first string: ");
  scanf("%s", &s);

  printf("Please enter second string: ");
  scanf("%s", &ct);

  mystrncat(s, ct, n);

  printf("Your concatenated string with strncat is: %s\n", s);

  mystrncpy(ss, ct, n);

  printf("Your copied string with strncpy is: %s\n", ss);
  
}

/* strncpy: copy at most n characters of string ct to s; return s.  Pad with '\0's  if t has fewer than n characters. */
char *mystrncpy(char *s, char *ct, int n)
{
  int i = 0;
  char *z = s;
  while (i < n && *ct != '\0')
  {
    z = ct;
    z++;
    ct++;
    i++;
  }
  while (i < n && *ct == '\0')
  {
    z = '\0';
    z++;
    i++;
  }
  return s;
}

/* strncat: concatenate at most n characters of string ct to string s, terminate s with '\0'; return s */
char *mystrncat(char *s, char *ct, int n)
{
  int i = 0;
  char *z = s;
  while (*z != '\0')
  {
    z++;
  }
  z--; /* put '\0' back on stack */
  while (i < n && *ct != '\0')
  {
    z = ct;
    z++;
    i++;
  }
  while (i < n)
  {
    z = '\0';
    z++;
    i++;
  }
}
