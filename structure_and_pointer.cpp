#include<iostream>
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

    int i,n;
     struct pro *ptr;
       cout<<"Enter size: ";
    cin>>n;
    ptr= new pro[n*sizeof(pro)];

    for(i=0; i<n; i++)
    {
        cout<<"\nEnter id: ";
        cin>>(ptr+i)->id;
        cout<<"Enter name: ";
        cin>>(ptr+i)->name;
        cout<<"Enter Brand: ";
        cin>>(ptr+i)->brand;
        cout<<"Enter type: ";
        cin>>(ptr+i)->type;
        cout<<"Enter quantity: ";
        cin>>(ptr+i)->quan;
        cout<<"Enter price: ";
        cin>>(ptr+i)->price;
    }

    for(i=0; i<n; i++)
    {
        if((ptr+i)->price>40)
        {
            cout<<"\nId:   "<<(ptr+i)->id<<endl;
            cout<<"Name:   "<<(ptr+i)->name<<endl;
            cout<<"Brand:  "<<(ptr+i)->brand<<endl;
            cout<<"Type:   "<<ptr->type<<endl;
            cout<<"Quantity: "<<(ptr+i)->quan<<endl;
            cout<<"Price:  "<<(ptr+i)->price<<endl;

        }
    }

}

