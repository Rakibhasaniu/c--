#include<bits/stdc++.h>
using namespace std;

vector<int> concatenateArray(vector <int> A,vector <int> B){
    vector <int> C;
    copy(B.begin(),B.end(),back_inserter(C));
    copy(A.begin(),A.end(),back_inserter(C));
    return C;
}
int main ()
{
    int n;
    cin>>n;
    vector <int > A(n);
    vector <int > B(n);
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>B[i];
    }

    vector <int>C=concatenateArray(A,B);
    for(int i=0;i<C.size();i++){
        cout<<C[i]<<" ";
    }
    
    return 0;
}