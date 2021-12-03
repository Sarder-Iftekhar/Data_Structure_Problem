#include<iostream>
using namespace std;
int summ=0;
int sum(int x)
{

    if(x<=5)
    {
        summ=summ+x;
        x++;
        sum(x++);
    }
    return summ;
}

int main()
{
    int i=1;
    int summ=sum(i);
    cout<<summ<<endl;
    return 0;

}
