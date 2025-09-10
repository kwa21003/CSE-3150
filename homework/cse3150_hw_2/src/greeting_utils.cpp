#include "greeting_utils.h"

namespace GreetingUtils {
    std::string create_message(const std::string& name) {
        return "Hello, " + name + "!";
    }

    char* format_as_c_string(const std::string& msg) {
        size_t sz = msg.length() + 1;
        char* cArr = new char[sz];
        for (size_t i = 0; i < sz - 1; ++i) {
            cArr[i] = msg[i];
        }
        cArr[sz] = '\0';
        return cArr;
    }
}
