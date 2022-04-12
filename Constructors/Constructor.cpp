#include<iostream>
#include<string>
using namespace std;

class cons
{
    string name;
    int age;
    public:
        cons()
        {
            cout<<"Enter the name : ";
            cin>>name;
            cout<<"Enter the age : ";
            cin>>age;
        }

        cons(string name,int age)
        {
            this->name=name;
            this->age=age;
        }

        void vote()
        {
            if(age>=18)
                cout<<this->name<<" aged "<<this->age<<" was eligible to cast the vote"<<endl;
            else
                cout<<"Oops ... ! "<<name<<" aged "<<age<<" was not eligible to cast the vote"<<endl;
        }
};

int main()
{
    cons c1,c2("Hari",20);
    c1.vote();
    c2.vote();
    return 0;
}