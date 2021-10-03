#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;

    if (x%400 == 0)
    {
        cout<<"Leap Year"<<endl;
    }
    else if (x%4 == 0 && x%100 !=0 )
    {
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not a leap year"<<endl;
    }
    return 0;
    
}