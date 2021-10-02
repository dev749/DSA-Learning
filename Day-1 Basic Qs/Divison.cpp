#include <iostream>
using namespace std;
int main(){
    int divisor,dividend;
    cout<<"Enter divisor : ";
    cin>>divisor;
    cout<<"\n\nEnter dividend : ";
    cin>>dividend;
    cout<<endl;

    int qut,rem;
    qut = dividend / divisor;
    rem = dividend % divisor;

    cout<<"The quotient is : "<<qut<<endl;
    cout<<"The remainder is : "<<rem<<endl;

    return 0;

}