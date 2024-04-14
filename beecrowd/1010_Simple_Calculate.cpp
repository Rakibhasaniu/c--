#include <bits/stdc++.h>
using namespace std;
int main()
{
    int product1Code, product1Unit, product2Code, product2Unit;
    double product1Price, product2Price, total;
    double totalCost;

    cin >> product1Code >> product1Unit >> product1Price;
    cin >> product2Code >> product2Unit >> product2Price;

    totalCost = (product1Unit * product1Price) + (product2Unit * product2Price);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << totalCost << endl;

    return 0;
}