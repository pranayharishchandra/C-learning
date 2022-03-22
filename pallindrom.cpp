#include <iostream>
#include <string>
using namespace std;

string pal(string s)
{
    int le = s.length();
    if (le == 0 || le == 1)
    {
        return "YES";
    }

    if (s[0] == s[le - 1])
    {
        s = s.substr(1, le - 2);
        // cout<<s;
        return pal(s);
    }

    else
    {
        return "NO";
    }
}

int main()
{
    while (true)
    {
        string str;
        cout << "enter stirng = ";
        cin >> str;
        cout << pal(str) << endl;
    }
    return 0;
}

// how to find lenght of string
// how to extract some part from a stirng ---> x = a.substr( 0, 3 );

// #include <iostream>
// using namespace std;
// int main() {
//     string a = "hello hii";
//     int b = a.length();
//     a = a.substr(1,b-2);
//     cout<<a<<b;
//     return 0;
// }

