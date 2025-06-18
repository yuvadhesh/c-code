#include<iostream>
using namespace std;
int main()
{
    int salary,bankloan,hostelfees,foodexpenses,parentsAmount;
    cin>>salary>>bankloan>>hostelfees>>foodexpenses>>parentsAmount;
    int totalexpenses=bankloan+hostelfees+foodexpenses+parentsAmount;
   if(salary>totalexpenses){
       cout<<"he can save money"<<endl;
   }
    else if(salary==totalexpenses)
    {
        cout<<"he can not save the money"<<endl;
    }
    else{
        cout<<"he can hard work"<<endl;
    }
 return 0;
    
}
