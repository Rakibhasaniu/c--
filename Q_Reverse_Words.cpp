// #include<bits/stdc++.h>
// using namespace std;


// void print ( stringstream& ss){
//     string result;
//     if(ss>>result){
//         print(ss);
//         cout<<result;
//     }
// };
// int main ()
// {
//     string s;
//     getline(cin,s);
//     for(char c:s){
//         s=c;
//         stringstream ss(s);
//         print(ss);

//     }
//     return 0;
// }
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    istringstream iss(S); 
    string word;
    bool firstWord = true; // Used to avoid printing a space before the first word

    while (iss >> word) {
        if (!firstWord) {
            cout << " "; // Print a space before each word except the first
        }

        for (int i = word.size() - 1; i >= 0; --i) {
            cout << word[i]; // Print the reversed word
        }

        firstWord = false;
    }

    cout << endl; // Print a newline after processing all words

    return 0;
}
