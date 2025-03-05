/*Write a Program to store 10 roll no of weak Learners of your class and 10 roll no of Advance learners of your class,
According to you.Store roll no's in two different array and display the record. */
#include<iostream>
using namespace std;
class array{
    private : int a[10]={11,12,13,14,15,16,17,18,19,20};
    private : int b[10]={21,22,23,24,25,26,27,28,29,30};
    public : void Display(){
        cout << "\nWeak Learners are :\n";
        for(int i=0;i<10;i++){
            cout << a[i]<< endl;
        }
        cout << "\nAdvance Learners are :\n";
        for(int i=0;i<10;i++){
            cout << b[i]<< endl;
        }
    }
};
int main(){
    array obj;
    obj.Display();
    return 0;
}
