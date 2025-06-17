#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y){
        cout<<x<<"is greater than"<<endl;
       }
       else if(y>z){
            cout<<y<<"is greater than"<<endl;
       }
       else if (z>x){
           cout<<z<<"is greater than"<<endl;
       }
    else {
        cout<<"is equal to"<<endl;
    }
    
    return 0;
}