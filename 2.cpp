#include<iostream>
using namespace std;
class time
{
private:

    int h,m,s;
public:
    void setvalues(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;
    }
    void display()
    {
        cout<<h<<"h"<<" "<<m<<"m"<<" "<<s<<"s";

    }


};
int main()
{
    time t1;
    int H,M,S;
    cin>>H>>M>>S;
    t1.setvalues(H,M,S);
    t1.display();

    return 0;

}

