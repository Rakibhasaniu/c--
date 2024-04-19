#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        int D;
        string N;
        cin >> D >> N;

        // Check for the end of input
        if (D == 0 && N == "0")
            break;

        string reconstructed;
        for (char digit : N)
        {
            // Exclude the failed digit
            if (digit - '0' != D)
                reconstructed += digit;
        }

        // If all digits were the failed digit, output 0
        if (reconstructed.empty())
            cout << "0" << endl;
        else
            cout << reconstructed << endl;
    }

    return 0;
}
