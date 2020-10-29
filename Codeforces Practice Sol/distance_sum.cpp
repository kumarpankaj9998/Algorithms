//Ansh Jaiswal
//191541
#include <iostream>

using namespace std;
struct distance
{
    int dist_km;
    int dist_m;
}s1,s2,s3;

int main()
{
    cout<<"Enter 1st distance"<<endl;
    cin>>s1.dist_km;
    cin>>s1.dist_m;
    cout<<"Enter 2nd distance"<<endl;
    cin>>s2.dist_km;
    cin>>s2.dist_m;
    s3.dist_km=s1.dist_km+s2.dist_km;
    s3.dist_m=s1.dist_m+s2.dist_m;
    while(s3.dist_m>=1000)
    {
        s3.dist_m-=1000;
        s3.dist_km++;
    }
    cout<<"Final distance"<<endl;
    cout<<s3.dist_km<<endl;
    cout<<s3.dist_m<<endl;

    return 0;
}
