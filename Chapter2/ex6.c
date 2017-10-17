#include <stdio.h>

int INT_SIZE = sizeof(int) * 8;

/* return x with n bits beginning at bit p set to the right most n bits of y*/
int setbits(int x, int p, int n, int y)
{
  int j = n - 1;
  int k = p - 1;
  int newNum = x;
  // loop
  // j = n - 1, gets decremented, shift y to the right
  // shift left INT_SIZE - 1
  // shift right INT_SIZE - 1
  // is it 1?
  // yes -> k = p - 1, gets decremented, shift right k, set
  // no -> k = p - 1, gets decremented, shift right k, clear 
  for (int i = 0; i < n - 1; ++i)
  {
    int z = y;
    z >>= j;
    --j;
    z <<= INT_SIZE - 1;
    z >>= INT_SIZE - 1;
    if (z == 1)
    {
      z <<= k;
      --k;
      newNum = newNum | z;
    }
    else
    {
      z <<= k;
      --k;
      newNum = newNum & z;
    }
  }
  return newNum;
}

int main()
{
  int x, p, n, y, newNum;
  printf("Enter an int: ");
  scanf("%d", &x);

  printf("Enter bit to start switching: ");
  scanf("%d", &p);

  printf("Enter how many bits to switch: ");
  scanf("%d", &n);

  printf("Enter second number: ");
  scanf("%d", &y);

  newNum = setbits(x, p, n, y);
  printf("New number is: %d\n", newNum);

  return 0;
}
