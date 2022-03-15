#include <stdio.h>

/*If we want to reverse a number say 1234 then first we extract 
  that last digit 4 then multiply it by 10 and again extract 3 and 
  add to it, to make 43... following this steps again and again 
  similarly we reverse the 1234 to 4321
*/

int reversed(int i)
{
  int x, reverse = 0, num = i;
  while (num != 0)
  {

    x = num % 10; // Use modulud to extract last digit of the number.
    reverse = reverse * 10 + x;
    num = num / 10;
  }

  return reverse;
}
// First reverse the number and then compare it to the initial number. If reversed and initial numbers are same then count it
int main()
{
  int count = 0;
  for (int i = 0; i < 100000; i++)
  {
    if (reversed(i) == i) // Check whether the number is palindrome or not
    {
      // If palindrome contidion satisfied count it
      count++;
    }
  }
  printf("Total palindrome numbers between 0 and 100000 are %d\n", count);
  return 0;
}

