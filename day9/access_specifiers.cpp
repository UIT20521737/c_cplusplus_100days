#include <iostream>
using namespace std;

class Base {
public:
    int public_member = 1;
protected:
    int protected_member = 2;
private:
    int private_member = 3;
};

class DerivedPublic : public Base {
public:
    void checkAccess() {
        cout << public_member << endl;    // OK
        cout << protected_member << endl; // OK
        // cout << private_member << endl;   // ERROR
    }
};

class DerivedProtected : protected Base {
public:
    void checkAccess() {
        cout << public_member << endl;    // OK, becomes protected
        cout << protected_member << endl; // OK, remains protected
    }
};

int main() {
    DerivedPublic d_pub;
    d_pub.public_member = 10; // OK, because it's public
    d_pub.checkAccess();

    DerivedProtected d_prot;
    // d_prot.public_member = 20; // ERROR, it became protected
    d_prot.checkAccess();

    return 0;
}