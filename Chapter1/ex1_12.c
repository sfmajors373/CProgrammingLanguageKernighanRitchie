#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main()
{
  int c;
  c = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      printf('\n');
    }
    else
    {
      printf("%c", c);
    }
  }
}
