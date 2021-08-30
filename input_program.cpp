#include <iostream>
using namespace std;
int main()
{
    string first_name, last_name;

    cout << "Enter First name : ";
    cin >> first_name;
    cout << "Enter Last name : ";
    cin >> last_name;

    cout << "Your Full Name is : " << first_name + last_name;
    return 0;
}