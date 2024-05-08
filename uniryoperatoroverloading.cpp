#include<iostream>
using namespace std;
class test{
    private:
    int num;
    public:
    test (){
        cout<<"Enter num: ";
        cin>>num;
    }
    void operator ++(){
        num+=2;
    }
    void show(){
        cout<<num;
    }

};

int main(){
    test t;
    ++t;
    t.show();
}