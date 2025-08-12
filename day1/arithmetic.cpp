#include <iostream>
using namespace std;
int main(){
    //Learning basic operators
    //Arithmetic operators: +, -, *, /, %, ++. --
    int a = 512, b = 12;
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    cout<<a<<" % "<<b<<" = "<<a%b<<endl;
    cout << "----------------------------------------" << endl;

    cout << "Operators a++ and a-- (postfix): Return the original value of 'a' before incrementing/decrementing it." << endl;
    cout << "Operators ++a and --a (prefix): Increment/decrement 'a' first, then return the new, updated value." << endl;
    cout << "void using a variable more than once in a single statement if one of the uses modifies it (e.g., with ++ or --), as this causes undefined behavior." << endl;
    cout << "----------------------------------------" << endl;

    cout<<a<<"++ =";
    cout<<(a++)<<endl;
    cout<<a<<"-- =";
    cout<<(a--)<<endl;
    cout<<"++"<<a<<" = ";
    cout<<(++a)<<endl;
    cout<<"--"<<a<<" = ";
    cout<<(--a)<<endl;
    return 0;
}