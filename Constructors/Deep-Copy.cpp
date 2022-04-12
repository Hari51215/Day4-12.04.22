#include <iostream>
using namespace std;

class deep 
{
    int *value;
    public:
        void set_value(int n)
        {
            *value = n; 
        }
        int get_value() 
        { 
            return *value; 
        }
        deep(int n);
        deep(const deep &source);
        ~deep();
};

deep::deep(int n) 
{
    value = new int;
    *value = n;
}

deep::deep(const deep &source): deep {*source.value} 
{
    cout << "Copy constructor  - deep copy" << endl;
}

deep::~deep() 
{
    delete value;
    cout << "Destructor - destroying the value" << endl;
}

void display(deep s) 
{
    cout << s.get_value() << endl;
}

int main() 
{
    deep d1 {100};
    display(d1);
    
    deep d2 {d1};   
    d2.set_value(1000);
    display(d2);

    return 0;
}