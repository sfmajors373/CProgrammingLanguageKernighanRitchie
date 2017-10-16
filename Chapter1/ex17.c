#include <stdio.h>
#define MAXLINE 1000 /*maximum input line size*/
#define MIN_RETURN 80 /* minimum number of characters in a line to return */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* main: print all lines greater than 80 characters */
int main()
{
  int len; /* current line length */
  int max; /* maxumimum length seen so far */
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = get_line(line, MAXLINE)) > 0)
  {
    if (len > MIN_RETURN)
    {
      printf("%s", line);
    }
  }
  return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
  {
    s[i] = c;
    if (c == '\n')
    {
      s[i] = c;
      ++i;
    }
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to': assume to is big enough */
// void copy(char to[]; char from[])
// {
//   int i;
// 
//   i = 0;
//   while ((to[i] = from[i]) != '\0')
//   {
//     ++i;
//   }
// }
