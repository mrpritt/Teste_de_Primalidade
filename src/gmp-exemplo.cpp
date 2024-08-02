#include <iostream>
using namespace std;

#include <gmpxx.h>

int main(int argc, char *argv[]) {
  mpz_class a;
  cin >> a;
  cout << "O quadrado de " << a << " é " << a*a << endl;
}
