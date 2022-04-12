#include<iostream>
using namespace std;
class copycon
{
    int x,y;
    public:
        copycon (int x1, int y1)
        {
            x = x1;
            y = y1;
        }

        copycon (const copycon &c)
        {
            x = c.x;
            y = c.y;
        }
    
        void display()
        {
            cout<<x<<"+"<<y<<" = "<<x+y<<endl;
            cout<<x<<"-"<<y<<" = "<<x-y<<endl;
            cout<<x<<"*"<<y<<" = "<<x*y<<endl;
            cout<<x<<"/"<<y<<" = "<<x/y<<endl;
        }
};

int main()
{
    copycon c1(10, 15);
    copycon c2=c1;
    cout<<"Normal constructor : "<<endl;
    c1.display();
    cout<<"Copy constructor : "<<endl;
    c2.display();
    return 0;
}