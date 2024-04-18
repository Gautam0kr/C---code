#include<iostream>
using namespace std;
class demo{
    private:
    static int x;
    public:
    static void fun(){
        cout<<"value of x : "<<x;
    }
};
 
 int demo::x=10;

 int main(){
    demo x;
    x.fun();
 }