// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     string s;
//     getline(cin,s);
//     stringstream ss(s);
//     string result;
//     int word=0;
//     while (ss>>result)
//     {
//         word++;
//     }
    
//     cout<<word<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool isWordCharacter(char c) {
    return isalpha(c);
}

int main ()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string result;
    int word = 0;

    while (ss >> result) {
        if (isWordCharacter(result[0])) {
            word++;
        }
    }

    cout << word << endl;
    return 0;
}

