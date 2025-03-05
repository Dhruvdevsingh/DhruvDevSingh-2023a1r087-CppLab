/* program to demonstrate working and execution sequence of constructor,destroctor and other functions*/
#include<iostream>
using namespace std;
class program // class 
{
    private: int a;
    public: program(){// Default Constructor
        a=5;
        cout << "a = " <<a;
    }
        public : void  Fun1(){
        cout << "\nFunction 1";
}
      public: void Fun2(){
        cout << "\nFunction 2";
      }
      public: ~ program(){
        cout << "\nDestructor called";
          }
    };
    int main(){
        program obj; //Class Object
        obj.Fun2();
        obj.Fun1();
    }
