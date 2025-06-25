#include<iostream>
using namespace std;
int main()
{
    int Boat,Adult,Child;
    cin>>Boat>>Adult>>Child;
    int Adults=Adult*75;
    int Childs=Child*50;
    int total=Adults+Childs;
    if(Boat>=total){
        cout<<"Boat is stable";
    }
    else{
        cout<<"Boat will drown";
    }
}