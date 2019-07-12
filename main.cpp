#include <iostream>
#include <QTouchDevice>

int main()
{
    if (QTouchDevice::devices().count() == 0) {
        std::cout << "\0";
    } else {
        std::cout << "2";
    }
    return 0;
}
