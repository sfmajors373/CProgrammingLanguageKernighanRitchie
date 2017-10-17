/* write a loop that accomplishes the same task as the following for loop but does not use the '&&' or '||' operators*/
/* for (i = 0; i < lim - 1; && (c = getchar()) != '\n' && c != EOF; ++i)
 * {
 *    s[i] = c;
 * }
 */

for (int i = 0; i < lim - 1; ++i)
{
  c = getchar();
  if (c == '\n')
  {
    break;
  }
  else if (c == EOF)
  {
    break;
  }
  else
  {
    s[i] = c;
  }
}
