#include<iostream>
using namespace std;
class fectorial
{
public:

   void findfec(int a)
   {
       int n=a;
       int f=1;
       while(a--)
       {

          f=f*n;
          n--;
       }
       cout<<f;


   }

};
int main()

{
    int n;
    cin>>n;
    fectorial f1;

    f1.findfec(n);


    return 0;

}
