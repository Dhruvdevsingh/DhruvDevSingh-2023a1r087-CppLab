#include<iostream>
using namespace std;
class Program
{
     public: void fun() // Function with No Return Type And No Parameter
    {
        cout <<"\nHi";
    }
    private : int pin;
    public : int validate() // Function with Return Type and No Parameter
    {
        cout << "Enter the Pin";
        cin >> pin;
        if (pin == 1234)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    void display_balance(int amount) // Function with No Return Type and Parameter
    {
        cout<<"\n Your Balance is"<<amount;
    }
};
int main(){              // Amount is the Formal Parameter
    int result;
    int amt =10000;
    Program obj;
    result = obj.validate();
    if(result == 1){
        cout <<"Authentication Succesfull";
        obj.display_balance(amt);// amt is actual parameter (defined ata function calling)
    }
    else{
        cout <<" Authentication Failed";
    }
    obj.fun();
    return 0;
