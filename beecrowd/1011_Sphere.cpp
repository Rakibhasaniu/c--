#include <bits/stdc++.h>
using namespace std;
int main()
{
    double r;
    cin >> r;
    const double pi = 3.14159;
    double result = (4.0 / 3) * pi * r * r * r;
    cout << "VOLUME = " << fixed << setprecision(3) << result << endl;

    return 0;
}