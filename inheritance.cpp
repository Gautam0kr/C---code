#include<iostream>
using namespace std;
class student{
    protected:
    int rno, sum=0, i, marks[5];
    public:
    void detail(){
        cout<<"Roll no.";
        cin>>rno;
        cout<<"Enter 5 marks :";
        for(i=0; i<5; i++){
            cin>>marks[i];
        }
       for(i=0; i<5; i++){
        sum=sum+marks[i];
       } 
    }
};

class sportmark{
    protected:
    int s_marks;
    public:
    void get_mark(){
        cout<<"Enter sport mark";
        cin>>s_marks;
    }
};

class result:public student, public sportmark{
    int tot, avg;
    public:
    void disp(){
        tot=sum+s_marks;
        avg=tot/6;
        cout<<avg;
    }
};

int main(){
    result obj;
    obj.detail();
    return 0;
}