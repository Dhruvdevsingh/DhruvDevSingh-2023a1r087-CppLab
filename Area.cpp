/*Program in cpp to create a class with name Area,default constructor of class which set radius value 5, and function() with name calculate(),
this function will calculate area of circle (3.14 *radius*radius), fiinally create deatructor to free memeory of used variables*/
#include<iostream>
using namespace std;
class area {
    private: float radius,res;
    public: area(){
        radius =5;
    }
    public : void Calculate(){
        res = 3.14 * radius * radius;
        cout << "\n Area of circle is "<< res;
    }
};
int main(){
    area obj;
    obj.Calculate();
    return 0;
}
