#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int data)
    {
        l.push_back(data);
    }
    void pop()
    {
        l.pop_back();
    }
    void top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == true)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    while (!s.empty())
    {

        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}