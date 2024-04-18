#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, count=0, c, temp, r, arm=0;
    cout<<"Enter any no. : ";
    cin>>n;

    temp=n;
    c=n;

    for(int i=1; n!=0; i++){
        n=n/10;
        count++;
    }

    for(int i=1; temp!=0; i++){
        r=temp%10;
        arm=round((pow(r,count)+arm));
        temp=temp/10;

    }

    if(c==arm){
        cout<<"Armstrong number";
    }else{
        cout<<"Not Armstrong number";
    }

    
    return 0;
}