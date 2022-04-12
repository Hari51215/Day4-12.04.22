#include<iostream>
#include<cmath>
using namespace std;

class arrcon 
    {
	    int x, y;
        public:
            arrcon(){}
	        arrcon(int x, int y)
	        {
	            this->x = x;
                this->y = y;
                cout <<"The value of " << x << "^" << y <<" : "<< pow(x,y)<<endl; 
	        }

	        ~arrcon() {}
};

int main()
{
    int size;
    cout<<"Enter the number of elements to be include in arrays : ";
    cin>>size;
	arrcon* arr = new arrcon[size];
	for (int i=0;i<size;i++) 
	{
		arr[i] = arrcon(i,i+1);
	}

	for (int i=1;i<=size;i++)
	{
	    cout<<"Destructor-arr["<<i<<"]"<<endl;
	    delete [] arr;
	}

	return 0;
}
