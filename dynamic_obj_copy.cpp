#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
};
int main ()
{
    Person* rakib=new Person("Rakib Hasan",25);
    Person* sohana = new Person("Sohana Shitol",24); 
    rakib->name=sohana->name;
    rakib->age=sohana->age;
    delete sohana;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}