#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int s,mx_min=-9999999,mx=0;
	    cin>>s;
	    int ar[s];
	    for(int i=0;i<s;i++)
	    {
	        cin>>ar[i];
	        mx=mx+ar[i];
	        if(mx_min<mx)
	            mx_min=mx;
	        if(mx<0)
	            mx=0;
	    }
	    cout<<mx_min<<endl;
	}
}
