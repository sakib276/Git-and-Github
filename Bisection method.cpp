
#include<bits/stdc++.h>
using namespace std;
double solve(double x)
{
    return x*x*x+3*x-5;
}
void bisec(double a,double b,int n)
{
    double c;
    if(solve(a)*solve(b)>= 0)
    {
        cout<<" entered value is wrong !!!!! "<<endl;
        return ;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            c=(a+b)/2;
            if(solve(c)== 0.0)
                break;
        if(solve(c)*solve(a)<0)
        {
           b=c;
        }
        else
        {
            a=c;
        }
        }
  cout<< "ans is  : "<<c<<endl;

    }
}
int main()
{
    double x1,x2;
    cout<<" enter two value : "<<endl;
    cin>>x1>>x2;

    int n;
    cout<<" enter iteration number : "<<endl;
    cin>>n;
     bisec(x1,x2,n);


}
