#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int employeeNumber, hoursWorked;
    float amountPerHour;

    cin >> employeeNumber >> hoursWorked >> amountPerHour;

    float salary = hoursWorked * amountPerHour;

    cout << "NUMBER = " << employeeNumber << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary << endl;

    return 0;
}
