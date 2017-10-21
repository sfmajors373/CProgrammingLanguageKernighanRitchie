#include <stdio.h>

int main()
{
  
}

void escape(char s[], char t[])
{
  for (int i = 0; s[i] != '\0'; i++)
  {
      switch (s[i])
      {
        case '\t':
        {
          t[i] = '\\t';
        }
      }
  }
}
