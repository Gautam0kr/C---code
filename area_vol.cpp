#include <iostream>
using namespace std;
class room
{

    float l, b, h;

public:
    void input()
    {
        cout << "Enter length breath and height :";
        cin >> l >> b >> h;
    }
    float area()
    {
        return 2 * ((l * b) + (b * h) + (l * h));
    }
    float vol()
    {
        return l * b * h;
    }
};
int main()
{
    room r1;
    r1.input();
    cout <<"Area is: "<< r1.area();
    cout<<endl;
    cout << "Volume is:" <<r1.vol();
}
