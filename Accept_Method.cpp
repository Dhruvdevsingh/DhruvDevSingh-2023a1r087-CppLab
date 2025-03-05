/*Program to demonstrate  working of array initilization using Accept Method*/
#include<iostream>
using namespace std;
class Program{
    private : int a[10];
    int i;
    public : void accept(){
 int i;
 for(i=0;i<=9;i++)
 {
    cout <<"\n Enter Array Element : ";
    cin >> a[i];
 } }
 public : void display(){
    cout <<" \nArray Elements Entered by the user is : ";
    for(int i=0;i<=9;i++){
        cout <<"\t"<< a[i];
    }}
};
int main(){
    Program obj;
    obj.accept();
    obj.display();
    return 0;
}
