#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c[] = {"Espresso Coffee", "Cappuccino Coffee", "Latte Coffee"};
    string t[] = {"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon Tea", "Green Tea", "Organic Darjeeling Tea"};
    string s[] = {"Hot and Sour Soup", "Veg Corn Soup", "Tomato Soup", "Spicy Tomato Soup"};
    string b[] = {"Hot Chocolate Drink", "Badam Drink", "Badam-Pista Drink"};
    char ch;
    cin >> ch;
    int in;
    cin >> in;
    if (ch == 'c')
    {
        if (in >= 1 && in <= 3)
        {
            cout << "Welcome to CCD!" << endl;
            cout << "Enjoy your " << c[in - 1] << "!" << endl;
        }
        else
        {
            cout << "INVALID INPUT!" << endl;
        }
    }
    else if (ch == 't')
    {
        if (in >= 1 && in <= 8)
        {
            cout << "Welcome to CCD!" << endl;
            cout << "Enjoy your " << t[in - 1] << "!" << endl;
        }
        else
        {
            cout << "INVALID INPUT!" << endl;
        }
    }
    else if (ch == 's')
    {
        if (in >= 1 && in <= 4)
        {
            cout << "Welcome to CCD!" << endl;
            cout << "Enjoy your " << s[in - 1] << "!" << endl;
        }
    }
    else if (ch == 'b')
    {
        if (in >= 1 && in <= 3)
        {
            cout << "Welcome to CCD!" << endl;
            cout << "Enjoy your " << b[in - 1] << "!" << endl;
        }
        else
        {
            cout << "INVALID INPUT!" << endl;
        }
    }
    else
    {
        cout << "INVALID INPUT!" << endl;
    }
    return 0;
}