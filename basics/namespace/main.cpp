#include <iostream>

// namespace
// it provides a solution for preventing naming conflicts in large projects. Each entity needs a unique name.
// A namespace allows for identically named entities as long as the namespaces are different.

namespace first {
    std::string name = "Raju";
}

namespace second {
    std::string name = "Hari";
}

int main () {

    std::cout << first::name << " and " << second::name << " are friends.\n";
    return 0;
}