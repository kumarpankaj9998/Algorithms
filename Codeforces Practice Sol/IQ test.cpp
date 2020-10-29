#include<iostream>
using namespace std;
int main()
{
    int t,e=0,o=0,even,odd,ev=0,od=0;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)
        {
            ev++;
            e=i;
            even=ar[i];
        }
        else
        {
            od++;
            o=i;
            odd=ar[i];
        }
    }
    if(ev<od)
    {
        cout<<e+1;
    }
    else
        cout<<o+1;
 
}
