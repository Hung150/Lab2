#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    char ch1, ch2, s;
    do
    {
        cout << "Insert the first fraction: ";
        cin >> a >> s >> b;
        cout << "Insert operation: ";
        cin >> ch1;
        cout << "Insert the second fraction: ";
        cin >> c >> s >> d;
        switch(ch1)
        {
            case '+':
                cout << "Result is " << a*d+b*c << '/' << b*d;
            break;
            case '-':
                cout << "Result is " << a*d-b*c << '/' << b*d;
            break;
            case '*':
                 cout << "Result is " << a*c << '/' << b*d;
            break;
            case '/':
                cout << "Result is " << a*d << '/' << b*c;
            break;
            default:
                cout << "You inserted wrong operation!" << endl;
        }
        cout << "\nDo you want repeat (y / n)? ";
        cin >> ch2;
    } while(ch2 == 'y');
}
