#include<iostream>
using namespace std;
class ReverseNumber
{
public:
    void reverseNum(int a)
    {
        while(a!=0)
        {
            int m=a%10;
            cout<<m;
            a=a/10;

        }




    }


};
int main()
{
    ReverseNumber a;
    int n;
    cin>>n;
    a.reverseNum(n);


    return 0;

}
