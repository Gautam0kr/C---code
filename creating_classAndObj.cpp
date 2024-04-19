#include <iostream>
using namespace std;
class data
{
private:
    int d;

public:
    data()
    {
        d = 0;
    }

    data(int dt)
    {
        d = dt;
    }

    void show()
    {
        cout << d << endl;
    }

    data add(data obj)
    {
        data tempobj;
        tempobj.d = obj.d + d;
        return tempobj;
    }
};

int main()
{
    data d1(12), d2(24), d3;
    d3 = d1.add(d2);
    d3.show();
}