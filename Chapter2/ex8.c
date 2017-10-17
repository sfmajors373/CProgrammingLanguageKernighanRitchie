#include <stdio.h>

int INT_SIZE = sizeof(int) * 8;
int rightrot(int x, int n);

int main()
{
  int x, n, newNum;
  
  printf("Enter an int: ");
  scanf("%d", &x);

  printf("Enter number of bits to rotate: ");
  scanf("%d", &n);

  newNum = rightrot(x, n);
  printf("New number is: %d\n", newNum);

  return 0;
}

int rightrot(int x, int n)
{
  int newNum = x;
  int bitStatus;
  int setBit =  1 << (INT_SIZE - 1);
  for (int i = 0; i < n - 1; ++i)
  {
    bitStatus = x & 1;
    if (bitStatus)
    {
      newNum >>= newNum;
      newNum = setBit | newNum;
    }
    else
    {
      newNum >>= newNum;
    }
  }
  return newNum;
}
