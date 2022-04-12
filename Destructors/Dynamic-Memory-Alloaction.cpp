#include<iostream>
using namespace std;
class pointer
{
    int *num1,*num2;
    public:
    pointer()
    {
        *num1=0;
        *num2=0;
    }
    pointer(int *n1,int *n2)
    {
        
        num1=n1;
        num2=n2;
        cout<<"Parameterized Constructor"<<endl;
        cout<<"The numbers are "<<*num1<<" and "<<*num2<<endl;
    }
    ~pointer()
    {
        cout<<"The numbers are "<<*num1<<" and "<<*num2<<endl;
        delete num1;
        delete num2;
        cout<<"Destructor";
        cout<<"The numbers are "<<*num1<<" and "<<*num2<<endl;
    }

};

int main()
{
    pointer ptr (new int(100),new int(20));
    return 0;
}