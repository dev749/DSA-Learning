#include <iostream>
using namespace std;

int main(){

    int a,b,temp;
    temp = 0;
    cout<<"Enter 1st no:  "<<endl;
    cin>>a;
    cout<<"\nEnter 2nd No : "<<endl;
    cin>>b;


    temp = a;
    a = b;
    b = temp;

    cout<<"the swapped 1st no is  : "<<a<<endl;
    cout<<"the swapped 2nd no is  : "<<b<<endl;


    return 0;
}