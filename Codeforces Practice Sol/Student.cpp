//Name-Ansh Jaiswal
//Roll number-191541
#include <iostream>
using namespace std;
class Student
{
    int enrollno;
    string name, branch;
    string grade[3];
    double cgpa;
    public:
        void setInfo(int rno, string nm,string br,string g[])
        {
            enrollno=rno;
            name=nm;
            branch=br;
            grade[0]=g[0];
            grade[1]=g[1];
            grade[2]=g[2];
        }
        void cgpaCAL()
        {
            int total=0;
            for(int x=0;x<3;x++)
            {
                if(grade[x]=="A+"||grade[x]=="a+")
                {
                    total+=10;
                }
                else if(grade[x]=="A"||grade[x]=="a")
                {
                    total+=9;
                }
                else if(grade[x]=="B+"||grade[x]=="b+")
                {
                    total+=8;
                }
                else if(grade[x]=="B"||grade[x]=="b")
                {
                    total+=7;
                }
                else if(grade[x]=="C+"||grade[x]=="c+")
                {
                    total+=6;
                }
                else if(grade[x]=="C"||grade[x]=="c")
                {
                    total+=5;
                }
                else if(grade[x]=="D"||grade[x]=="d")
                {
                    total+=4;
                }
                else
                {
                    total+=0;
                }
            }
            cgpa=total/3.0;

        }
        void display()
        {
            cout<<"Enrollment no is: "<<enrollno<<endl;
            cout<<"Name is: "<<name<<endl;
            cout<<"Branch: "<<branch<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
        }
}obj[10];

int main()
{
    for(int x=0;x<10;x++)
    {
        int rollnum;
        string name,branch;
        cin>>rollnum;
        cin>>name>>branch;
        string g[3];
        for(int y=0;y<3;y++)
        {
            cin>>g[y];
        }
        obj[x].setInfo(rollnum,name,branch,g);
        obj[x].cgpaCAL();
        obj[x].display();
    }
    return 0;
}
