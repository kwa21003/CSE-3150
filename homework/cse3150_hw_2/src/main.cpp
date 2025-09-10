#include <iostream>
#include "greeting_utils.h"

int main() {
    using namespace std;

    string name;
    // cout << "Please enter your name: ";  <- pytest error
    getline(cin, name);

    string greeting = GreetingUtils::create_message(name);
    char* cArrGreeting = GreetingUtils::format_as_c_string(greeting);

    cout << cArrGreeting << endl;

    delete[] cArrGreeting;
    return 0;
}
