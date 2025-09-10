#include <iostream>
#include "AdvancedMath.h"
#include "MathUtils.h"

int main() {
    using std::cout;
    using std::endl;
    int a = 3, b = 4;

    cout << "a" << " + " << "b" << " = " << MathUtils::add(a,b) << endl;
    cout << "a" << " * " << "b" << " = " << MathUtils::multiply(a,b) << endl;
    cout << "square(a)" << " = " << AdvancedMath::square(a) << endl;

    return 0;
}
