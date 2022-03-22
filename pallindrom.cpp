#include <iostream>
using namespace std;
int main() {
    string a = "hello hii";
    int b = a.length();
    a = a.substr(1,b-2);
    cout<<a<<" "<<b; //ello 9
    return 0;
}
