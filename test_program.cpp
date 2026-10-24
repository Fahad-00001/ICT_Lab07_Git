#include <iostream>
#include <string>
using namespace std;

void greet_user(string);
void bye_user(string);
int main() {
    string user_name;
    cout << "Enter your name: ";
    cin >> user_name;
    greet_user(user_name);
    cout << "Bye " << user_name << "!" << endl;
    return 0;
}

void greet_user(string name)
{
    cout << "Hello " << name << "!" << endl;
}

void bye_user(string name)
{
    cout << "Bye " << name << "!" << endl;
}
