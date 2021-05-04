#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int num;
    int num2;
    cin>>num;
    stack <int> stk;
    for (int i=0; i<num; i++)
    {
        cin>>num2;
        if(num2==0 && stk.empty()!=0)
            stk.pop();
        stk.push(num2);
    }
    int len = stk.size();
    for (int i=0; i<len; i++)
    {   
        if(stk.empty()==0)
            cout<<"0";
        cout<<stk.top();
        stk.pop();
    return 0;
    }
    
