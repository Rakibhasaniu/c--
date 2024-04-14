#include <iostream>

using namespace std;

int addMofizWay(unsigned int a, unsigned int b)
{
    unsigned int sum = 0;
    // Loop through each bit position
    for (int i = 0; i < 32; i++)
    {
        // Extract the current bits
        unsigned int bitA = a & (1 << i);
        unsigned int bitB = b & (1 << i);
        // Perform bitwise XOR for addition (ignoring carry)
        sum |= (bitA ^ bitB);
    }
    return sum;
}

int main()
{
    unsigned int num1, num2;

    while (cin >> num1 >> num2)
    {
        unsigned int result = addMofizWay(num1, num2);
        cout << result << endl;
    }

    return 0;
}
