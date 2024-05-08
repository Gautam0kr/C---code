#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for (int i=1; i<11; i++){
        sum+=(i*i);
        cout<<i<<"^2: "<<(i*i)<<endl;
    }
    cout<<"Sum of series(1+4+9+.....+100): "<<sum;
    return 0;
}