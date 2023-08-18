
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    int found = s.find("EGYPT");
    while (found != string::npos){
        s.replace(found,5," ");
        found = s.find("EGYPT",found + 1);
    }
    cout<<s<<endl;
    
    return 0;
}