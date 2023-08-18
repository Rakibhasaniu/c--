#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)
{
    string result;
    if(ss>>result)
    {
        print(ss);
        cout<<result<<" ";
    }
}
int main ()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    
    return 0;
}