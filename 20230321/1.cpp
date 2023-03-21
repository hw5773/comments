#include <iostream>
using namespace std;

int check_validity(int a, int b)
{
  if (a< b)
    return 1;
  else 
    return 0;
}

int sum_up(int a, int b)
{
  int i;
  int sum = 0;

  for (i=a; i<=b; i++)
    sum += i;
  cout << "sum: " << sum << endl;
}

int main(int argc, char *argv[])
{
  int a;
  int b;

  cout << "Enter two numbers: ";
  cin>> a >> b;
  check_validity(a, b);
  if (check_validity(a,b) == 1)
    sum_up(a,b);
  else
    return 0;
  return 0;
}
