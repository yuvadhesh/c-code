#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a>b&&a>c){
    cout<<a<<" IS greater";
}
else if(b>c&b>a){
    cout<<b<<" Is greater";
}
else{
    cout<<c<<" Is greater";
}
}