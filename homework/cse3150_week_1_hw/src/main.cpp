#include <iostream>
#include "AdvancedMath.h"
#include "MathUtils.h"

int main() {
    using std::cout;
    using std::endl;
    cout << AdvancedMath::square(5) << endl;
    cout << MathUtils::multiply(3, 10) << endl;
    cout << MathUtils::add(3, 5) << endl;

    return 0;
}
