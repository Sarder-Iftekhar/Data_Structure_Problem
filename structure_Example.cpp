#include<iostream>
#include<string.h>
using namespace std;
struct pro
{
    int id;
    char name[100];
    char brand[100];
    char type[100];
    int quan;
    int price;
};

int main()
{
    struct pro p1[20];
    int i,n;
    cout<<"Enter size: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\nEnter id: ";
        cin>>p1[i].id;
        cout<<"Enter name: ";
        cin>>p1[i].name;
        cout<<"Enter Brand: ";
        cin>>p1[i].brand;
        cout<<"Enter type: ";
        cin>>p1[i].type;
        cout<<"Enter quantity: ";
        cin>>p1[i].quan;
        cout<<"Enter price: ";
        cin>>p1[i].price;
    }

    for(i=0; i<n; i++)
    {
        if(p1[i].price>40)
        {
            cout<<"\nId:   "<<p1[i].id<<endl;
            cout<<"Name:   "<<p1[i].name<<endl;
            cout<<"Brand:  "<<p1[i].brand<<endl;
            cout<<"Type:   "<<p1[i].type<<endl;
            cout<<"Quantity: "<<p1[i].quan<<endl;
            cout<<"Price:  "<<p1[i].price<<endl;

        }
    }

}
