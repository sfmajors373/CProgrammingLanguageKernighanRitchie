#include <stdio.h>

/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
  int b;

  for (b = 0; x != 0; x >>= 1)
  {
    if (x & 01)
    {
      b++;
    }
  }
  return b;
}

/* use x &= (x - 1) to make bitcount quicker */
/* x &= (x - 1) == (x = x & (x - 1))
 * this operation always sets the last bit to 0 since x - 1 always toggles the last bit so the two unlike bits with AND will always equal 0
 */

int bitcount(unsigned x)
{
  int b;

  for (b = 0; x != 0; x &=(x - 1))
  {
    if (x & 01)
    {
      b++;
    }
  }
  return b;
}
