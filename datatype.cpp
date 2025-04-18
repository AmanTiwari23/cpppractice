#include <iostream>
#include <limits>
using namespace std;
int main()
{

    // to check size
    cout << "size of double :" << sizeof(double) << endl;
    cout << "size of int :" << sizeof(int) << endl;
    cout << "size of char :" << sizeof(char) << endl;
    cout << "size of string :" << sizeof(string) << endl;
    cout << "size of float :" << sizeof(float) << endl;

    // address

    int a;
    cout << &a << endl;

    // limits
    cout << "max limit of int : " << numeric_limits<int>::max()<<endl;
    cout << "max limit of char : " << static_cast<int>(numeric_limits<char>::max()) << endl;
    cout << "max limit of float : " << numeric_limits<float>::max()<< endl;
    cout << "max limit of double : " << numeric_limits<double>::max();

    cout << "min limit of int : " << numeric_limits<int>::min()<<endl;
    cout << "min limit of char : " << static_cast<int>(numeric_limits<char>::min()) << endl;
    cout << "min limit of float : " << numeric_limits<float>::min()<< endl;
    cout << "min limit of double : " << numeric_limits<double>::min();
}