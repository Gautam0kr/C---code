#include<iostream>
using namespace std;
int main(){
    int n, r, temp=0;
    cout<<"Enter any no. : ";
    cin>>n;

    for(int i=1; n!=0; i++){
        r=n%10;
        temp=(temp*10)+r;
        n=n/10;
    }

    cout<<"Reverse of number is "<<temp;
    return 0;
}