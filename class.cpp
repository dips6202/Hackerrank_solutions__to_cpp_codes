#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
    int a,s;
    string f,l;
    
    public:
    
    void set_age(int a1)
    {
     a=a1;
    }
     
    void set_standard(int s1)
    {
        s=s1;
    } 
    
    void set_first_name(string f1)
    {
        f=f1;
    }
    
    void set_last_name(string l1)
    {
        l=l1;
    }
    
    int to_string()
    {
       cout<<a<<","<<f<<","<<l<<","; 
       return s;    
    }
    
    
    int get_age(){
        return a;
    }
    
    string get_last_name() {
        return l;
    }
    
    string get_first_name() {
        return f;
    }
    
    int get_standard() {
      return s;  
    }
    

    
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
