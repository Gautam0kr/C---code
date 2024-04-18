#include<iostream>
using namespace std;
class prime_chk{
    public:
    void chkprime(int num){
        int count=0;
        for(int i=1; i<=num; i++){
            if(num%i==0)
            count++;
        }

        if(count==2){
            cout<<"Prime number";
        }else{
            cout<<"Not prime";
        }
    }
};

int main(){
    int num;
    cout<<"Enter number :";
    cin>>num;
    prime_chk num1;
    num1.chkprime(num);
    return 0;
}