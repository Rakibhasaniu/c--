#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int *A = new int[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    int M;
    cin >> M;

    int *B = new int[N + M];
    for (int i = 0; i < N; ++i)
    {
        B[i] = A[i];
    }
    delete[] A;

    for (int i = N; i < N + M; ++i)
    {
        cin >> B[i];
    }

    for (int i = 0; i < N + M; ++i)
    {
        cout << B[i] << " ";
    }

    delete[] B;

    return 0;
}
