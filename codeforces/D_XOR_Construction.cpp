// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> constructArray(vector<int> &a)
// {
//     int n = a.size() + 1;
//     vector<int> b(n, 0);

//     // Initialize b[0] and b[1].
//     b[0] = 0;
//     b[1] = a[0];

//     // Construct the rest of the array.
//     for (int i = 2; i < n; i++)
//     {
//         b[i] = b[i - 1] ^ a[i - 1];
//     }

//     return b;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> a(n - 1);
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> a[i];
//     }

//     vector<int> b = constructArray(a);

//     for (int i = 0; i < n; i++)
//     {
//         cout << b[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> a[i];
    }

    vector<int> b(n);
    b[0] = 0;

    // Construct b using the given conditions
    for (int i = 1; i < n; ++i)
    {
        b[i] = a[i - 1] ^ b[i - 1];
    }

    // Output the result
    for (int i = 0; i < n; ++i)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
