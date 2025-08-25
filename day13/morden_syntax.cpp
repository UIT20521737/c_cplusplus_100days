#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> items = {"Swords", "Shields", "Potions"};

    // The modern and best way to iterate through a container
    // 'const auto&' means:
    //   - const: We promise not to modify the item.
    //   - auto: Let the compiler figure out the type (it's std::string).
    //   - &: Use a reference to avoid making an unnecessary copy of the string.
    for (const auto& item : items) {
        cout << "Item: " << item << endl;
    }

    return 0;
}