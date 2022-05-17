#include <kdbindings/signal.h>

#include <iostream>
#include <string>

using namespace KDBindings;

int main()
{
    // Create new signal
    Signal<std::string, int> signal;

    // Connect a lambda
    signal.connect([](std::string arg1, int arg2) {
        std::cout << arg1 << " " << arg2 << std::endl;
    });

    // Emit the signal and the lambda is called
    signal.emit("The answer:", 42);

    return 0;
}