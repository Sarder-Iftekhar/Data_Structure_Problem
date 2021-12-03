#include<iostream>
using namespace std;
struct pro
{
    int id;
    string  P_name;
    string  B_name;
    int prize;
    int quantity;
};
int main()
{
    int n,i,total;
   string  a;
    pro *ptr;
    cout<<"enter product number : "<<endl;
    cin>>n;
    ptr=new pro[n*sizeof(pro)];
    for(i=0; i<n; i++)
    {
        cout<<"enter id : ";
        cin>>(ptr+i)->id;
        cout<<"P_name : ";
        cin>>(ptr+i)->P_name;
        cout<<"Brand name: ";
        cin>>(ptr+i)->B_name;
        cout<<"\nprize : ";
        cin>>(ptr+i)->prize;
        cout<<"quantity : ";
        cin>>(ptr+i)->quantity;
        cout<<endl<<endl;
    }
    cout<<"Enter product name : "<<endl;
    cin>>a;
    for(i=0; i<n; i++)
    {
        if(a==((ptr+i)->P_name))
        {
            total=((ptr+i)->prize)*((ptr+i)->quantity);
            cout<<"Total asset is : ";
            cout<<total<<endl<<endl;
        }
    }
}

