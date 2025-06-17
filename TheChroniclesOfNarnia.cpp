#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int revenue=x*y;
    int cost=(x*y)/100;
    int profit=revenue-cost;
    cout<<profit<<endl;
    return 0;
}
