#include<iostream>
using namespace std;

int  fact(int x)
{
    int fac;

    if(x==0)
    {
        return 1;
    }
    else
    {
        fac=x*fact(x-1);
    }

    return fac;


}
int main()
{
    int y=3,factorial;

    factorial=fact(y);
    cout<<"fact="<<factorial;

}

