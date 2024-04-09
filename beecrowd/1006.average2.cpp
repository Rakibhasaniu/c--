#include <iostream>
#include <iomanip> // For std::setprecision

using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C; // Reading the three grades from the user

    double weightA = 2.0, weightB = 3.0, weightC = 5.0;
    double MEDIA = ((A * weightA) + (B * weightB) + (C * weightC)) / (weightA + weightB + weightC); // Calculating the weighted average

    cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl; // Printing the result with 1 digit after the decimal point

    return 0;
}
