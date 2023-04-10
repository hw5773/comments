#include <iostream>
#include <cstring>

using namespace std;

int uadd_ok(unsigned x, unsigned y)
{
  return x+y >= x && x+y >= y;
}

int main(int argc, char *argv[])
{
  if (argc != 3)
  {
    cout << "Please insert two numbers" << endl;
    return 0;
  }

  unsigned a = strtol(argv[1], NULL, 16);
  unsigned b = strtol(argv[2], NULL, 16);

  if (uadd_ok(a,b)) cout << a << " + " << b << " = " << a + b << endl;
  else cout << "Overflow!" << endl;
  return 0;
}
