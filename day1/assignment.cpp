#include <iostream>
using namespace std;
int main(){
    int a = 100, b = 12;
    cout << a << " += " << b << " = ";
    cout << (a+=b) << endl;
    cout << a << " -= " << b << " = ";
    cout << (a-=b) << endl;
    cout << a << " *= " << b << " = ";
    cout << (a*=b) << endl;
    cout << a << " /= " << b << " = ";
    cout << (a/=b) << endl;
    cout << a << " %= " << b << " = ";
    cout << (a%=b) << endl;
    cout << "----------------------------------------" << endl;
    cout << "Warning: Do not read from and modify the same variable in a single cout statement. This can lead to unexpected results." << endl;
    return 0;
}
