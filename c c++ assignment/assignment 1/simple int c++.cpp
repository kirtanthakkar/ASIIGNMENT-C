 #include <iostream>
#include<string.h>
using namespace std;

class interest
{
public:
    int year;
    float rate = 2.5;
    
    
   private: int amount;
    
public:
  interest(int p)
    {

        amount=p;

       
    }
   
    public: void display()
    {
        cout<<amount+1*rate*year;
        
    }


};

int main()
{
    int principal,year;
    interest obj();
    
   
    cout << "enter principal: " << endl;
    cin >> principal;
      cout << "enter no of years : " << endl;
     cin >> year;

    obj.display();
   
}