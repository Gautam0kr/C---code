#include<iostream>
using namespace std;
class circle{
    public:
        float r, ar, cf;
        circle(float r){
            cout<<"Area is : "<<(3.14*r*r)<<endl<<"Circumference is : "<<(3.14*2*r);
        }
};

int main(){
    circle c1(3);
    return 0;
}