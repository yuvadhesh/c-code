#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>y){
        cout<<x<<"is greater than"<<endl;
       }
       else if(y>x){
            cout<<y<<"is greater than"<<endl;
       }
    
    else{
        cout<<"is equal to"<<endl;
    }
    
    return 0;
}