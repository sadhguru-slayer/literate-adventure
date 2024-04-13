#include <iostream>
#include <utility>
#include <string>
using namespace std;

void frint() {
    cout << endl;
}
template<typename T, typename... Args>
void frint(const T& value, const Args&... args) {
    cout << value << " ";
    frint(args...);
}
template<typename... Args>
void print(const Args&... args) {
    frint(forward<const Args>(args)...);
}
int main() {
    int intValue;
    double doubleValue;
    char charValue;
    string stringValue;
    cin>>intValue>>doubleValue>>charValue>>stringValue;
    print("Hello");
    print(intValue,charValue,stringValue,doubleValue);
    return 0;
}
