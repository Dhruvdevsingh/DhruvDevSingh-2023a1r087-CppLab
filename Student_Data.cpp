// Program to create a class with name Student-data with function name Welcome-Message(), this function on execution will display a message Welcome to MIET Jammu.
// Now we add 1 more Function with name Validate_RegNo() , this function will accept student name and registration number from student and validate it.
// (Valid RegNo's are from 61 to 120).
#include<iostream>
using namespace std;
class Student_Data
{
    public : void Welcome_Message()
    {
        cout << "Welcome to MIET Jammu";
    }
    private : string Name ; // encapsulation for data & abstraction for functions
    int RegNo;
    public : string Validate_RegNo()// for accepting true or false values i.e(string)
    {
      cout << "\n Enter your Name";// USer input name 
      cin >> Name;
      cout << "\n Enter your Registration Number";
      cin >> RegNo;
      if(RegNo >= 61 && RegNo <=120)
      {
        return "True";
      }
      else{
        return "False";
      }
    }
};
int main(){
    Student_Data obj;
    obj.Welcome_Message();
    string res;
    res = obj.Validate_RegNo();
    if(res == "True"){
        cout << "\n Login Successful";
    }
    else{
        cout<< "\n Login Failed";
    }
    return 0;
}
