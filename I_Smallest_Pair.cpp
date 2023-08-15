#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int smallestSum = INT_MAX;
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int sum = A[i] + A[j] + j - i;
                if (sum < smallestSum) {
                    smallestSum = sum;
                }
            }
        }

        cout << smallestSum << endl;
    }

    return 0;
}
