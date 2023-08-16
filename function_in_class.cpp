#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        Person(string nm,int ag)
        {
            name=nm;
            age=ag;
        }
};
int main ()
{
    Person rakib("Rakib Hasan",25);
    cout<<rakib.name<<" "<<rakib.age<<endl;
    return 0;
}