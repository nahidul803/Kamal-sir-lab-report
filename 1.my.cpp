#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Student{
public:
    int acm_solve,id,hnrboard=0;
    double gpa;
    char name[20];

    void input_student_info(void)
    {
        char n[20];
        double a;
        int b,c;
        //cout<<"Enter in this format name<space>id<space>Gpa<space>acm problem solve no"<<endl;
        cin>>n>>b>>a>>c;
        strcpy(name,n);
        id=b;
        gpa=a;
        acm_solve=c;
    }
    void displayinfo(void)
    {
        cout<<"Student name:"<<name<<"\nid          :"<<id<<"\nGpa         :"<<gpa<<"\nAcm solve   :"<<acm_solve<<endl;
    }
};
int main()
{
    int i,j,k;
    cout<<"Enter Student No:"<<endl;
    cin>>i;
    Student a[i];
    cout<<"Enter in this format name<space>id<space>Gpa<space>acm problem solve no"<<endl;
    for(j=0;j<i;j++)
    {
        a[j].input_student_info();
        if(a[j].gpa>=3.50&&a[j].acm_solve>99)
        {
            a[j].hnrboard=1;
        }
    }
    cout<<"HONOR BOARD\n.................................................."<<endl;
    for(k=0;k<i;k++)
    {
        if(a[k].hnrboard==1)
        a[k].displayinfo();
        cout<<".................................................."<<endl;
    }
    return 0;
}
