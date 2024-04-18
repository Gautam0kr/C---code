#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float sal;
    employee(int id, string name, float sal){
        this->id=id;
        this->name=name;
        this->sal=sal;
    }

    void display(){
        cout<<id<<name<<sal<<endl;
    }
};

int main(){
    employee e1=employee(101, "a", 200);
    employee e2=employee(102, "b", 300);
    e1.display();
    e2.display();
}