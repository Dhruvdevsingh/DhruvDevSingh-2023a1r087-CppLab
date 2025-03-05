/* program :- Write a program to create a class with name PayApp,with different functions,
Accept() Function will accept the amount from user
Validate() Function will check amount(>0)
Discount() Function will calculate 10% discount on Amount
Display() Function will display final Bill on Screen.*/
#include<iostream>
using namespace std;
class PayApp
{
    private : float amount,dis;
    public : void Accept()
    {
        cout << "Enter Amount ";
        cin >> amount;
    }
    public : void Validate()
    {
        if(amount>0)
        {
            cout << "\n Amount is Valid";
            Discount();
            Display();
        }
    }
    public : void Discount()
    {
        dis = amount/100*10;

    }
    public : void Display()
    {
        cout << "\n Your Payable Bill is "<<amount-dis;
    }
};
int main()
{
    PayApp obj;
    obj.Accept();
    obj.Validate();
    return 0;
}
