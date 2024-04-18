#include <iostream>
using namespace std;
class a{
    public:
    void display(){
        cout<<"hello";
    }
};
class b: public a{};
class c: public a{};
class d: public b, public c{};

int main(){
    d obj;
    obj.b::display();
}