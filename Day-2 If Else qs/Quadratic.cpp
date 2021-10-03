#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a,b,c;
    int r1,r2 = 0;
    int D;
    cout<<"\n The quadratic eqn has form of a(x^2)+b(y^2)+c=0\n"<<endl;

    cout<<"To find the roots of eqn we need the values of coefficients a,b,c !\n\n"<<endl;
    cout<<"Enter the value of coefficient of x : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the value of coefficient of y : ";
    cin>>b;
    cout<<endl;
    cout<<"Enter the value of constant : ";
    cin>>c;
    cout<<endl;

    cout<<"The Entered eqn is :         " <<a<<"x^2 + "<<b<<"y^2 + "<<c<<" = 0"<<endl;

    D = c^2 - 4*a*b;
    
    if (D == 0 )
    {
        cout<<"\nEqual roots \n"<<endl;
        r1 = (-b*b)/ (2*a);
        cout<<r1<<endl;
    }
    else if (D > 0 )
    {
        cout<<"Real  & Unequal roots"<<endl;
        r1 = (-c + sqrt(D))/2*a;
        r2 = (-c - sqrt(D))/2*a;
        cout<<r1<<endl<<r2<<endl;
    }else{
        cout<<" Imaginary Roots " <<endl;
        r1 = (-b*b)/ (2*a);
        r2 = sqrt(-D)/(2*a);
        cout<<r1<<" + "<<r2<<"i"<<endl;
    }


}