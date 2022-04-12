#include <iostream>
#include <string>

using namespace std;

class Player
{
    string name;
    int age;
    int ranking;
    public:
        void set_name(string name) 
        { 
            this->name = name; 
        }
        void set_age(int age) 
        { 
            this->age = age; 
        }
        void set_ranking(int ranking) 
        { 
            this->ranking = ranking; 
        }
        Player() 
        { 
            cout << "No args constructor called"<< endl;
        }
        Player(string name) 
        { 
            cout << "One arg constructor called"<< endl;
        }
        Player(string name, int age, int ranking) 
        {
            cout << "Three args constructor called"<< endl; 
        }
        void display()
        {
            cout<<"Name of the player : "<<name<<endl;
            cout<<"Age of the player : "<<age<<endl;
            cout<<"Ranking of the player : "<<ranking<<endl;
        }
};

int main() 
{   
    Player p1;
    p1.set_name ("Ram");
    Player p2 ("Raj");
    p2.set_name ("Raj");
    Player p3 ("Rajesh",28,20);
    p3.set_name ("Rajesh");
    p3.set_age (28);
    p3.set_ranking (20);
    p3.display();
    return 0;
}