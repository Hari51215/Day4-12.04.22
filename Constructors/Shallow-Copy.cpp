#include <iostream>
using namespace std;

class shallow 
{
    int *num;
    public:
        void set_num(int n) 
        { 
            *num = n; 
        }
        int get_num() 
        { 
            return *num; 
        }
        shallow(int n);
        shallow(const shallow &source);
        ~shallow();
};

shallow::shallow(int n) 
{
    num = new int;
    *num = n;
}

shallow::shallow(const shallow &source) : num(source.num) 
{
        cout << "Copy constructor  - shallow copy" << endl;
}

shallow::~shallow() 
{
    delete num;
    cout << "Destructor - destroying num" << endl;
}

void display(shallow s) 
{
    cout << s.get_num() << endl;
}

int main()
{    
    shallow s1 {100};
    display(s1);
    
    shallow s2 {s1};
    s2.set_num(1000);
    display(s2);
    return 0;
}