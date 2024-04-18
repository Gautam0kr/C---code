#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
   static int count;
    test(){
        a=10;
        b=20;
        count++;
    }
};

int test::count=0;

int main(){
    test t1;
    test t2;
    cout<<t1.count;
    cout<<t2.count;
    cout<<test::count;
}