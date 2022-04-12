#include <iostream>
using namespace std;
 
class zoho
{
    public:
        zoho()
        {
            cout << "zoho Constructor \n";
        }
 
        virtual ~zoho()
        {
            cout << "zoho Destructor \n";
        }
};
 
class cliq: public zoho
{
    public:
        int *n;
        cliq()
        {
            cout << "cliq Constructor \n";
            n = new int(10);
        }
 
        ~cliq()
        {
            cout << "cliq Destructor \n";
            delete(n);
        }
};

int main() 
{
    zoho *z = new cliq();
    delete(z);
    cout<<endl;
    cliq *c = new cliq();
    delete(c);
    return 0;
}