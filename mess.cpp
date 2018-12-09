#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Person{
public:
    int i,meal;
    double deposit,cost,give=0,get=0,giveorget=0;
    char name[20];

    display(){
        cout<<"Member name:\t"<<name<<"\nDeposit    :\t"<<deposit<<"\nmeal       :\t"<<meal<<"\ncost       :\t"<<cost<<endl;
        cout<<name<<" have to give "<<give<<" tk and get "<<get<<" tk"<<endl;

        }
    void enter(void){
    int i,p;
    char s[20];
    cin>>s>>i>>p;
    strcpy(name,s);
    deposit=i;
    meal=p;
    }

};

int main()
{
    int i,j,sumofmeal=0,k,x,y;

    double sumofdeposit=0,permealrate=0,bazar;



/*        cout<<"press 1 to add data\npress 2 to display data\npress 3 to terminate\n";
        cin>>k;
        if(k==1)
        {*/
            cout<<"Adding member Details...\n Enter no of members\n";
            cin>>i;
            Person a[i];
            for(j=0;j<i;j++)
            {
                cout<<"Enter in this format \"name<space>deposit<space>meal\" of member "<<j+1<<"no"<<endl;
                a[j].enter();
                sumofmeal+=a[j].meal;
                sumofdeposit+=a[j].deposit;

            }
            cout<<"Enter total Bazar cost\n";
            cin>>bazar;
            permealrate=bazar/sumofmeal;
            cout<<permealrate<<endl;
             for(j=0;j<i;j++)
            {
                a[j].cost=permealrate*a[j].meal;
                a[j].giveorget=a[j].deposit-a[j].cost;
                if(a[j].giveorget>=0)
                {
                    a[j].get=a[j].giveorget;
                }
                else
                {
                    a[j].give=abs(a[j].giveorget);
                }


            }

        cout<<"press 1 to display data\n";
        cin>>k;
        if(k==1)
        {
            for(int f=0;f<i;f++)
            {
                cout<<f+1<<". "<<a[f].name<<endl;
            }
            cout<<"Enter ID no\n Press 555 to Terminate";
            while(1)
            {
                cin>>x;
                if(x==555) break;
                else if(x>i) cout<<"Error ,Press again correctly"<<endl;
                else
                {
                    a[x-1].display();
                }

            }

        }

    return 0;

}
