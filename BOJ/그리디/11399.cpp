#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[1001];
    int people;
    int sum=0;
    cin>>people;
    for(int i=0; i<people;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+people);
    for(int i=0; i<people;i++)
    {
        sum=sum+(people-i)*arr[i];
    }
    cout<<sum;
}