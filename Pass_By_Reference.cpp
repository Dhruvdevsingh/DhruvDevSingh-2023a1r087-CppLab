#include<iostream>
using namespace std;
class Program{
    public : int a;
    public : Program(int b){
        a = b;
    }
    public : void Display (){
        cout  << "\nValue of a is "<<a;

    }
};
void modify(Program &obj2){// Modify function accepts obj2 as parameter
    obj2.a=10; // Any change inside this function will not modify orignal value of a.
    // this will create separate instance of Program class. 
    cout << "\nModified Value is" <<obj2.a;
}
int main(){
    Program obj1(9); //Original object of class with initilization of parametrized constructor
    obj1.Display();
    modify(obj1); // calling modify function
    obj1.Display();
}
