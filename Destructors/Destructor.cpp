#include<iostream>
using namespace std;

class dest
{
    int m1,m2,m3,m4,m5;
    string name;
    double avg;
    public:
    dest()
    {
        cout<<"Enter the student name: ";
        cin>>this->name;
        cout<<"Enter the student marks: "<<endl;
        cin>>this->m1>>this->m2>>this->m3>>this->m4>>this->m5;
    }
    ~dest()
    {
        if(this->m1 >= 35 && this->m2 >= 35 && this->m3 >= 35 && this->m4 >= 35 && this->m5 >= 35)
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL"<<endl;
        this->avg=(this->m1 + this->m2 + this->m3 + this->m4 + this->m5)/5;
        cout<<"The average of the student is : "<<this->avg<<endl;
    }
};

int main()
{
    dest d1;
    return 0;
}