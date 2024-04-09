// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     char x;
//     cin>>x;
//     if(x>='0' && x<='9'){
//         cout<<"IS DIGIT"<<endl;
//     } else if(x>='A' && x<='Z'){
//         cout<<"ALPHA"<<endl;
//         cout<<"IS CAPITAL"<<endl;
//     } else if(x>='a' && x<='z'){
//         cout<<"ALPHA"<<endl;
//         cout<<"IS SMALL"<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (x >= 48 && x <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (x >= 65 && x <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (x >= 97 && x <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    return 0;
}