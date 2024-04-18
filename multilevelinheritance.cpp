#include <iostream>
using namespace std;
class Base{
    public:
    virtual void show()=0;
};
class D1:public Base{
    public:
    void show(){
        cout<<"hello";
    }
};
class D2: public Base{
    public:
    void show(){
        cout<<"BBAU";
    }
};

int main(){
    D1 obj;
    D2 obj1;
    Base *b;
    b=&obj;
    b->show();
    b=&obj1;
    b->show();
}
