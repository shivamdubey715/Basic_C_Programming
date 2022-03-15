#include <stdio.h>
#include <math.h>

int sumofDigits(int i)
{
  int num = i, sum = 0, x;
  while (num != 0)
  {
    x = num % 10;
    sum = sum + x;
    num = num / 10;
  }
  return sum;
}

int isPrime(int n)
{
  for (int i = 3; i * i <= n; i += 2)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int count = 0;
  for (int i = 59; i <= 1000000000; i += 18)
  {
    if (i % 10 != 5)
    {

      if (sumofDigits(i) == 14)
      {
        if (isPrime(i))
        {
          count++;
        }
      }
    }
  }
  printf("Total prime numbers between 0 and 100000000 whose sum of digits is 14 are %d\n", count);
  return 0;
}
