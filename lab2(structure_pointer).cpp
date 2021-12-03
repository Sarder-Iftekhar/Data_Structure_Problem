#include<iostream>
using namespace std;
struct pro
{
    int id;
   char name[100];
    char brandname[100];
    char type[100];
    int prize;
    int quantity;
};
int main()
{
    int n,i,total1,total=0,d;
   char a;
    pro *ptr;
    cout<<"enter product number : "<<endl;
    cin>>n;
    ptr=new pro[n*sizeof(pro)];
    for(i=0; i<n; i++)
    {
        cout<<"enter id : ";
        cin>>(ptr+i)->id;
        cout<<"name : ";
        cin>>(ptr+i)->name;
        cout<<"prize : ";
        cin>>(ptr+i)->prize;
        cout<<"quantity : ";
        cin>>(ptr+i)->quantity;
        cout<<endl<<endl;
    }
    for(i=0; i<n; i++)
    {
        total1=((ptr+i)->prize)*((ptr+i)->quantity);
        cout<<"per product cost: "<<total1<<endl;
        total=total+total1;
    }
    cout<<"All cost"<<total;
}

