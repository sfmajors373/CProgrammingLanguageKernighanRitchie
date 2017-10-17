#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++)
  {
    if (s[i] != c)
    {
      s[j++] = s[i];
    }
  }
  s[j] = '\0';
}

int main()
{
  char s[5] = "apple";
  int c = 'p';

  squeeze(s, c);
  printf("new word: %s\n", s);

  return 0;
}
