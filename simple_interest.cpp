#include<iostream>
using namespace std;
int main(){
    int p, r, t;
    cout<<"Enter principle amount : ";
    cin>>p;
    cout<<"Enter rate : ";
    cin>>r;
    cout<<"Enter time : ";
    cin>>t;

    cout<<"Simple interest= "<<(p*r*t)/100;
    return 0;
}