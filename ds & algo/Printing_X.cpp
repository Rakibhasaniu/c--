#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << "X" << endl;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                cout << "X";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
