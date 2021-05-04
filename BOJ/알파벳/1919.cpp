#include <iostream>
using namespace std;

int main()
{
    char a[1001];
    char b[1001];
    int count=0;
    cin >> a >> b;
    int len_a = strlen(a);
    int len_b = strlen(b);
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

