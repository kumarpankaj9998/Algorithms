#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>input;
    int n;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        if(input.count(str)==0)
        {
            cout<<"OK\n";
            input[str]=1;
 
        }
        else
        {
            cout<<str<<input[str]<<endl;
            input[str]+=1;
        }
    }
 
}
