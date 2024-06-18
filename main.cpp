#include <ostream>
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    std::cout << "Testing" << std::endl;
    return argc == 3 ? EXIT_SUCCESS : EXIT_FAILURE;
}
