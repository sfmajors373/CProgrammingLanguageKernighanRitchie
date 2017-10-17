#include <stdio.h>

/* rewrite squeeze to delete the characters in s2 from s */
// void squeeze(char s[], char s2[])
// {
//   int i, j, k;
// 
//   for (k = 0; s2[k] != '\0'; k++)
//   {
//     printf("letter to delete: %c\n", s2[k]);
//     for (i = j = 0; s[i] != '\0'; i++)
//     {
//       if (s[i] != s2[k])
//       {
//         s[j++] = s[i];
//       }
//     }
//     printf("exiting inner loop\n");
//   }
//   s[j] = '\0';
// }

void squeeze(char s[], char s2[])
{
  int i, j, k;
  int found = 0;

  for (i = j = 0; s[i] != '\0'; i++)
  {
    found = 0;
    printf("big loop letter: %c\n", s[i]);
    for (k = 0; s2[k] != '\0' && (found == 0); k++)
    {
      printf("inner loop letter: %c\n", s2[k]);
      if (s[i] == s2[k])
      {
        found = 1;
      }
    }
    if (found == 0)
    {
      s[j++] = s[i];
    }
  }
  s[j] = '\0';
}

int main()
{
  char s[5] = "apple";
  char s2[1] = "p";

  squeeze(s, s2);
  printf("new word: %s\n", s);

  return 0;
}
