#include<iostream>
using namespace std;
class complex
{
private:

    int x, y;
public:
    void setvalues(int a, int b)
    {

        x=a;
        y=b;
    }
    void showvalue()
    {
       cout<<"real="<<x<<"+"<<"imaginary="<<y;

    }





};
int main()
{
    complex c1;
    c1.setvalues(3,4);
    c1.showvalue();


    return 0;

}
