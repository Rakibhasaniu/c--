
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int lucky = 0, unlucky = 0;
  for (int i = 0; i < n; i++) {
    int weapon;
    cin >> weapon;
    if (weapon % 2 == 0) {
      lucky++;
    } else {
      unlucky++;
    }
  }

  if (lucky > unlucky) {
    cout << "READY FOR BATTLE";
  } else {
    cout << "NOT READY";
  }

  return 0;
}
