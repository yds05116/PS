#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int time;
    int num;
    cin>>time;
    int arr[1000];
    for (int i=0; i<time; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+time);
    for (int i=0; i<time; i++)
    {
        cout<<arr[i];
    }
    return 0;
}

