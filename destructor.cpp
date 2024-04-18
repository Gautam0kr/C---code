#include<iostream>
using namespace std;
class employee{
    public:
    employee(){
        cout<<"hi";
    }
    ~employee(){
        cout<<"hello";
    }
};
int main(){
    employee e1;
    employee e2;
}