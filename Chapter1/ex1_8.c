#include <stdio.h>

int main ()
{
  int c, blank, tab, nl;
  blank = 0;
  tab = 0;
  nl = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      ++nl;
    }
    else if (c == '\t')
    {
      ++tab;
    }
    else if (c == ' ')
    {
      ++blank;
    }
  }
  printf("Blanks: %d\n, Tabs: %d\n, NewLines: %d\n", blank, tab, nl);
}
