#include <iostream> 
using namespace std;

class calculate
{
    public:
    int perimeter;

    calculate()
    {
        perimeter=50;
    }    

    calculate(int l,int b)
    {
        perimeter=2*(l+b);
    }

    void print()
    {
        cout<<"Perimeter="<<perimeter<<"cm"<<endl;
    }
};

int main()
{
    calculate c1;
    calculate c2(10,20);
    c1.print();
    c2.print();
}