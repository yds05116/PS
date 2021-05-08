#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a;
    string b;
    int count=0;
    cin >> a >> b;
    int len_a = a.length();
    int len_b = b.length();
    for (int i=0; i<len_a; i++)
    {
        for(int j=0; j<len_b; j++)
        {
            if (a[i]==b[j])
            count=count+2;            
       }
    }
    cout<<len_a +len_b -count;
    return 0;
}

