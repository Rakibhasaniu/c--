#include <iostream>
#include <iomanip> // For std::setprecision, though it's not needed for this problem

using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int first = A * B;
    int second = C * D;
    int DIFERENCA = first - second;
    cout << "DIFERENCA = " << DIFERENCA << endl; // Corrected quotes here

    return 0;
}
