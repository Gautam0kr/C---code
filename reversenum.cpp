#include<iostream>
using namespace std;
class revnum{
    public:
        // int num;
        // void inputnum(){
        //      cout<<"Enter number: ";
        //      cin>>num;   
        // }
    
        void rev_num(int num);
};

void revnum::rev_num(int num){
    int r, sum=0;
    for(int i=1; num!=0; i++){
        r=num%10;
        sum=(sum*10)+r;
        num/=10;
    }
    cout<<"Reversed number : " <<sum;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
        revnum num1;
    // num1.inputnum();
    num1.rev_num(num);
    }