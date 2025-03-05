// Program to demonstrate working of Constructor
#include<iostream>
using namespace std;
class Program // Class with name program
{
    public : Program() // Class Constructor
    {
        cout << "Constructor called ";
    }
};
int main(){
    Program obj; // Class Object
    return 0;
}
