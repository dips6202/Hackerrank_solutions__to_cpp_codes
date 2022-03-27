#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    char c1,c2;
    
    cin>>a>>b;
    
    int l1=a.size();
    int l2=b.size();
    cout<<l1<<" "<<l2<<endl;
    
    string c=a+b;
    cout<<c<<endl;
    
     c1=b[0];
     c2=a[0];
     a[0]=c1;
     b[0]=c2;
     cout<<a<<" "<<b;   
  
    return 0;
}
