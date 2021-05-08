#include <iostream>
using namespace std;
void star(int n)
{
    if (n==0)
    {
        cout<<"*";
    }
    for (int i=0; i<n; i++)
    {
        star(n-1);
    }
    cout<<'\n';
}
int main()
{
    int num;
    cin>>num;
    star(num);
    return 0;
}