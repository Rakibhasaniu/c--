#include <iostream>
#include <iomanip> // Required for std::setprecision

using namespace std;

int main()
{
    double A, B;
    cin >> A >> B; // Reading the two grades from the user

    double weightA = 3.5, weightB = 7.5;
    double MEDIA = ((A * weightA) + (B * weightB)) / (weightA + weightB); // Calculating the weighted average

    cout << "MEDIA = " << fixed << setprecision(5) << MEDIA << endl; // Printing the result with 5 digits after the decimal point

    return 0;
}
