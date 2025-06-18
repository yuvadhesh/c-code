#include<iostream>
using namespace std;
int main()
{   
    float item1, item2,discountpercent;
    cin>>item1>>item2>>discountpercent;
    float total=item1+item2;
    float saved=(discountpercent/100.0)*total;
    float discountprize=total-saved;
    cout<<fixed<<endl;
    cout<<total<<endl;
    cout<<discountprize<<endl;
    cout<<saved<<endl;
    return 0;
}