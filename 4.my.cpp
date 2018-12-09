#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Student{
public:
    int id,acm_participation,acm_solve,checkapply=0,applicable=0;
    char name[20];

    void input_student_info(void)
    {
        char n[20];
        int a,b,c,z=0;
        //cout<<"Enter in this format name<space>id<space>acmparti<space>acm problem solve no"<<endl;
        cin>>n>>b>>a>>c>>z;
        strcpy(name,n);
        id=b;
        acm_participation=a;
        acm_solve=c;
        checkapply=z;
    }
    void displayinfo(void)
    {
        cout<<"Student name        :"<<name<<"\nid                  :"<<id<<"\nAcm participation   :"<<acm_participation<<"\nAcm solve           :"<<acm_solve<<endl;
    }
};
int main()
{
    int i,j,k;
    cout<<"Enter Total Student No:"<<endl;
    cin>>i;
    Student a[i];
    cout<<"Enter in this format name<space>id<space>\nAcm participation<space>acm problem solve no<space>press 1 if student applied,otherwise press 0"<<endl;
    for(j=0;j<i;j++)
    {
        a[j].input_student_info();
        if(a[j].checkapply==1&&a[j].acm_participation>2&&a[j].acm_solve>300)
        {
            a[j].applicable=1;
        }
    }
    cout<<"Eligible student as coach\n.................................................."<<endl;
    for(k=0;k<i;k++)
    {
        if(a[k].applicable==1)
        {a[k].displayinfo();}
        cout<<".................................................."<<endl;
    }
    return 0;
}
