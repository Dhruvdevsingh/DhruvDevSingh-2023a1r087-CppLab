/*Program to determine concept of function overloading
Create a class with name Shapes,Create a function with name Area(),
with Area function calculate Area of circle,area of Reactangle ,
Area of triangle,using function  overloading */
#include<iostream>
using namespace std;
class Shapes{
    private: float res =0;float l1;float b;
    public:void area(float radius){ // Function 1
        res = 3.14*radius*radius;
        cout << "\nArea of circle is : " << res;
    }
 public : void area(float l,float h){ // Function 2
    res = 0.5*l*h;
    cout << "\nArea of Triangle is : " << res;
 }
 public : void area (){ // Function 3
 l1 =6,b=9;
 res = l1*b;
cout << "\nArea of rectangle is : " << res;
}
};
int main(){
    Shapes obj;
    obj.area();
    obj.area(6);
    obj.area(4,5);
    return 0;
}
