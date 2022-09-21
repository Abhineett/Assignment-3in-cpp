#include<iostream>
using namespace std;
class largestnum
{
public:

    int largest(int d,int e,int f)
    {
       if(d>e&&d>f)
            return d;
       else if(e>d&&e>f)
       {
           return e;
       }
       else if(f>d&&f>e)
       {
           return f;
       }
       else
        return 0;


    }



};
int main()
{
    largestnum n;
    int a,b,c;
    cin>>a>>b>>c;
    int num=n.largest(a,b,c);
    cout<<num;


    return 0;
}
