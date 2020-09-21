#include <iostream>
using namespace std;

int main()
{
    int x, y, temp;
    cout << "\n\n Exchange variables value:\n";
	cout << "---------------------------------------\n";
    cout << "Input x: ";
    cin>>x;
    cout << "Input y: ";
    cin>>y;
    cout << "\n\nBefore swapping\n";
    cout << "x = " << x << ", y = " << y << endl;

    temp = x;
    x = y;
    y = temp;

    cout << "\nAfter swapping." << endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}