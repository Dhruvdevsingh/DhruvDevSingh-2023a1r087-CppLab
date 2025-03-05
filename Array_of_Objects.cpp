// Program to demonstrate working of Array of Objects (Method1)
#include<iostream>
using namespace std;
class Program { // Class Decleration
    private : int RegNo; float Marks;
    public : Program (int R,float M){
        RegNo = R;
        Marks = M;
    }
    public : void Display(){ // Function of Class
        cout <<"\n Reg Number =" << RegNo <<"\t" <<"Marks = "<<Marks;
}
};
int main(){
    Program obj[3] ={{101,450},{102,430},{103,440}}; //Array of Object with Manual Initilization
    int i,j;
    for(i=0;i<3;i++){
        obj[i].Display();// Calling of Display Function with array of Object
    }
    return 0;
}
