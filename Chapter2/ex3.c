#include <stdio.h>
#include <math.h>
#include <string.h>

int htoi(unsigned char s);

int main()
{
  char hex[17];
  printf("Please enter a hex value: ");
  // scanf("%hhx," &hex);
  gets(hex);

  printf("Decimal equivalent: %d\n", htoi(hex));

}

int htoi(unsigned char hex)
{
  long long decimal, place;
  enum values { A = 10, B, C, D, E, F };
  int val;
  decimal = 0;
  place = 1;
  int len = strlen(hex);
  len--; // finding total number of digits in hex
  for (int i = 0; i != '\0'; ++i)
  {
    if (hex[i] >= '0' && hex[i] <= '9')
    {
      val = hex[i];
    }
    else if (hex[i] == 'A')
    {
      val = hex[i];
    }
    decimal += val * pow(16, len);
    len--;
  }
  return decimal;
}
