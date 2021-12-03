#include<iostream>
#include<string.h>
using namespace std;
struct pro
{
    int id;
    string name;
   string brand;
    string type;
    int quan;
    int price;

};
int main()
{

    int i,n;
    string  b;
     struct pro *ptr;
     cout<<"Enter size:";
    cin>>n;
    ptr= new pro[n*sizeof( pro)];
    for(i=0; i<n; i++)
    {
        cout<<"Enter id: ";
        cin>>(ptr+i)->id ;
        cout<<"Enter name: ";
        cin>>(ptr+i)->name;
        cout<<"Enter brand: ";
        cin>>(ptr+i)->brand;
        cout<<"Enter type: ";
        cin>>(ptr+i)->type;
        cout<<"Enter quantity: ";
        cin>>(ptr+i)->quan;
        cout<<"Enter price: ";
        cin>>(ptr+i)->price;
    }
  cout<<"Enter brand name: ";
    cin>>b;


    for(i=0; i<n; i++)
    {
        if(b==((ptr+i)->brand) )
        {
            cout<<"\nId: "<< (ptr+i)->id;
             cout<<"\nName: "<<(ptr+i)->name;
            cout<<"\nBrand name: "<<(ptr+i)->brand;
             cout<<"\nType: "<<(ptr+i)->type;
            cout<<"\nQuantity:"<<(ptr+i)->quan;
            cout<<"\n Price: "<<(ptr+i)->price;
        }
    }


}



