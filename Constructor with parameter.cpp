// Prgram to demonstrate constructor with parameter
#include<iostream>
using namespace std;
class Program // Class With name Program
{
        public : Program(string name,int MobNo) // Class Constructor with parameter
        {
          cout << "Name is"<< name;
          cout << "Mobile Number is"<< MobNo;
        }
 };
 int main(){
    string nm;
    int mob;
    cout <<"Enter name and Mobile Number";
    cin >> nm >> mob;
    Program  obj(nm,mob); // Class oject with parameter
    return 0;
 }
