#include <iostream>
using namespace std;
int su(int a, int summ = 0)// sum = 0 by defalut when arguement not givn like python
{
    cout<<"summ = "<<summ<<endl;
    if (a / 10 == 0)
    {
        return a + summ;
    }
    summ = a % 10 + summ;
    return su(a / 10, summ);
}
int main()
{
    while (true)
    {
        int num;
        cout << "enter number = ";
        cin >> num;
        cout << su(num) << endl;
    }

    return 0;
}