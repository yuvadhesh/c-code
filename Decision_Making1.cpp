#include<iostream>
using namespace std;
int main(){
    int n,r,c,col;
    cin>>n>>r>>c>>col;
    col=((n-1)/r)+1;
    if(col==2||col==n-2){
        cout<<"It is not a mango tree";
    }
    else{
        cout<<"It is a mango tree";
    }
}