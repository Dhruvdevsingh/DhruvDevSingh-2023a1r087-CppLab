#include<iostream> // #include :- Pre procesor directive
 // iostream :- input/output dtream supports funtions related to input and output.
// iostream have definition of all predefine input and output functions used in this program.
using namespace std;// using is a keyword
// namespace :- collection of predefine class
// std :- name of predine namespace.
class program // Block All Staments in the bracket. 
{
    public : // Access Specifier
    void display(){ // function Definition
        cout << "Hello"; // cout is used to display message on screen , Burt the msg must be enclosed in double quotes " ".
    }
};
int main(){
    program obj;// Syntax of boject :- class name object name//
 obj.display(); // function calling Syntax
    return 0;   // objectb name.function name();
}
