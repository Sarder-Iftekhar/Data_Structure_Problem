#include<iostream>
using namespace std;
void print(int x)
{
    if(x<=5)
    {
    cout<<x;
    x++;

    print(x);

    }

}
int main()
{
    int i=1;
    print(i);
    return 0;
}
