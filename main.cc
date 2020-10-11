#include <iostream>

#include "solution.h"
#include "tests.h"

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

#ifdef _TEST
  TestAll();
#else
  Solution();
#endif

  return EXIT_SUCCESS;
}
