#include<iostream>
using namespace std;
class ArrayProgram{
    private : int a[5]; 
    int b[5]={1,2,3,4,5};//Array Decleration
    public : void Display(){
    a[0]= 10; // initilization of array element at index 0 using direct method
    a[1]= 5; // Intilization of array element at index 1 using Direct method
    cout <<"\n Array Element at index 0 is " << a[0];
    cout <<"\n Array Element at index 1 is " << a[1];
    cout <<"\n Enter Array Element at index 2 is ";
    cin >>a[2];
    cout <<"\nArray Element at index 2 is " <<a[2];
    cout <<"\n Array Element at index 0 in array b is " << b[0];
}
};
int main(){
    ArrayProgram obj;
    obj.Display();
    return 0;
}
