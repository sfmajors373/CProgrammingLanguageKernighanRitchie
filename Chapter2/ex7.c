#include <stdio.h>

int INT_SIZE = sizeof(int) * 8;
int invert(int x, int p, int n);

int main()
{
  int x, p, n, newNum;
  
  printf("Enter an int: ");
  scanf("%d", &x);

  printf("Enter digit to start toggle: ");
  scanf("%d", &p);

  printf("Enter number of bits to toggle: ");
  scanf("%d", &n);

  newNum = invert(x, p, n);
  printf("New number is: %d\n", newNum);

  return 0;
}

int invert(int x, int p, int n)
{
  int decrementedp;
  int newNum = x;
  for (int i = 0; i < n - 1; ++i)
  {
    int z = 1 << (decrementedp - 1);
    --decrementedp;
    newNum = newNum ^ z;
  }
  return newNum;
}
