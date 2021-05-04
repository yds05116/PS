#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b)
{
    if(a.second!=b.second)return a.second<b.second;
    else return a.first<b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int time;
    int x,y;
    cin>>time;
    vector <pair<int,int>> v;
    for (int i=0; i<time; i++)
    {
        cin >> x >> y;
        v.emplace_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    for (int i=0; i<time; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    return 0;
}