#include<stdio.h>
class Add{
    // data + operation(function)
    int a,b,c;
    // operation
    public:
    void input(int x,int y){ //input
        a = x;
        b = y;
    }
    void cal(){ // calculation
        c = a+b;
    }
    void display(){
        print ("a+b :%d",c);
    }
};
int main(){
    Add obj; // class_name obj_name
    obj.input(12,14);
    obj.cal();
    obj.display;
    return 0;
}
