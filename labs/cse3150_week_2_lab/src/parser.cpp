#include "parser.h"

namespace StringUtils {
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
        size_t firstSpace = fullName.find(' ');

        if (firstSpace != std::string::npos) {
            *firstName = fullName.substr(0, firstSpace);
            *lastName = fullName.substr(firstSpace+1);
        } else {
            *firstName = fullName;
            *lastName = "";
        }
    }

    std::string getUsername(const std::string& email) {
        size_t firstAt = email.find('@');

        if (firstAt != std::string::npos) {
            return email.substr(0, firstAt);
        } else {
            return email;
        }
    }
}
