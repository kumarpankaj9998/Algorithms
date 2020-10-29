#include<iostream>
#include<algorithm>
#include<string.h>
 
using namespace std;
int main()
{
    string s;
    int t=0;
    cin>>s;
    if(s[1]>=65 && s[1]<=90)
    {
        for(int i=1;i<s.length();i++)
        {
            if(isupper(s[i]))
            {
                    t++;
 
                    if(t==s.length()-1)
                    {
                        if(islower(s[0]))
                            {   transform(s.begin(),s.end(),s.begin(),::tolower);
                                s[0]=s[0]-32;
                            }
                        else
                            {
                                transform(s.begin(),s.end(),s.begin(),::tolower);
                            }
 
                        cout<<s;
                        return 0;
                    }
            }
            else
                break;
 
        }
    }
 
    else if(s[1]=='\0')
    {
 
        if(islower(s[0]))
            s[0]=s[0]-32;
        else
            s[0]=s[0]+32;
 
 
    }
 
    cout<<s;
}
