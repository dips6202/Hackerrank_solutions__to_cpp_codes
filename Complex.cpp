#include <iostream>
using namespace std;

class Complex{
 int real,imag;

 public:
 Complex(int r=0,int i=0)
 {
     real=r;
     imag=i;
 }
 Complex operator +(const Complex &obj)
 {
     Complex res;
     res.real=real+obj.real;
     res.imag=img+obj.imag;
     return res;
 }
void print()
{
    cout<<real<<"+i"<<imag<<endl;
}};

int main()
{
    Complex c1(10,5),c2(2,4),c3;
    c3=c1+c2;
    c3.print();
}