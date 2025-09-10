#include <iostream>
#include "parser.h"

int main() {
    using namespace std;

    string fullName, email;
    cout << "Please enter your full name: ";
    getline(cin, fullName);
    cout << "Please enter your email: ";
    getline(cin, email);

    string* firstName = new string;
    string* lastName = new string;

    StringUtils::parseName(fullName, firstName, lastName);
    string username = StringUtils::getUsername(email);

    cout << "\nFirst Name: " << *firstName << endl;
    cout << "Last Name: " << *lastName << endl;
    cout << "Username: " << username << endl;

    delete firstName;
    delete lastName;

    return 0;
}
