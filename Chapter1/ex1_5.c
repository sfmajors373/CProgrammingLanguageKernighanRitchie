#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  float fahr, celsius;
  printf("Fahrenheit to Celsius Conversion Chart\n");
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
  {
    celsius = 5.0 / 9.0 * (fahr - 32);
    printf("%8.0f%16.1f\n", fahr, celsius);
  }
}
