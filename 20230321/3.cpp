#include <iostream>
using namespace std;
int check_validity(int a, int b) {
  if (b > a) {
    return 1;
  }
  else {
    return 0;
  }
}
int sum_up(int a, int b) {
  int sum = 0;
  for (int i=a;i<b+1;i++) {
    sum += i;
  }
  return sum;
}
int main(int argc, char *argv[])
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  if (check_validity(a,b)) {
    argc = sum_up(a, b);
    cout << argc << endl;
  }
  return 0;
}
